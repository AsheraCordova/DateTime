package com.ashera.datetime;
// start - imports
import java.util.*;

import r.android.annotation.SuppressLint;
import r.android.content.Context;
import r.android.os.Build;
import r.android.view.*;
import r.android.widget.*;
import r.android.view.View.*;

import com.ashera.widget.BaseHasWidgets;

import r.android.annotation.SuppressLint;

import com.ashera.core.IFragment;
import com.ashera.widget.bus.*;
import com.ashera.converter.*;
import com.ashera.widget.bus.Event.*;
import com.ashera.widget.*;
import com.ashera.widget.IWidgetLifeCycleListener.*;
import com.ashera.layout.*;

import org.teavm.jso.dom.html.HTMLElement;

import static com.ashera.widget.IWidget.*;
//end - imports
import java.text.*;
import r.android.text.*;

public class TimePickerImpl extends BaseHasWidgets implements com.ashera.validations.FormElement {
	//start - body
	private HTMLElement htmlElement;
	public final static String LOCAL_NAME = "com.ashera.datetime.TimePicker"; 
	public final static String GROUP_NAME = "com.ashera.datetime.TimePicker";
	private com.ashera.datetime.TimePicker timePicker;
	

	
	@Override
	public void loadAttributes(String localName) {
		ViewGroupImpl.register(localName);

		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("timeFormat").withType("resourcestring"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("hint").withType("resourcestring"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("text").withType("resourcestring"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("showClearButton").withType("boolean"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("hintTextFormat").withType("resourcestring").withOrder(-1));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("onTextChange").withType("string"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("onbeforeTextChange").withType("string"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("onafterTextChange").withType("string"));
	
	}
	
	public TimePickerImpl() {
		super(GROUP_NAME, LOCAL_NAME);
	}
	public  TimePickerImpl(String localname) {
		super(GROUP_NAME, localname);
	}
	public  TimePickerImpl(String groupName, String localname) {
		super(groupName, localname);
	}

	@Override
	public IWidget newInstance() {
		return new TimePickerImpl(groupName, localName);
	}
	
	@SuppressLint("NewApi")
	@Override
	public void create(IFragment fragment, Map<String, Object> params) {
		super.create(fragment, params);
		timePicker = new TimePickerExt();
		
		nativeCreate(params);
		
		
		ViewGroupImpl.registerCommandConveter(this);

	}

	@Override
	public Object asWidget() {
		return timePicker;
	}

	@Override
	public boolean remove(IWidget w) {
		boolean remove = super.remove(w);
		timePicker.removeView((View) w.asWidget());
		 nativeRemoveView(w);            
		return remove;
	}
	
	@Override
    public boolean remove(int index) {
		IWidget widget = widgets.get(index);
        boolean remove = super.remove(index);

        if (index + 1 <= timePicker.getChildCount()) {
            timePicker.removeViewAt(index);
            nativeRemoveView(widget);
        }    
        return remove;
    }

	private void nativeRemoveView(IWidget widget) {
		r.android.animation.LayoutTransition layoutTransition = timePicker.getLayoutTransition();
		if (layoutTransition != null && (
				layoutTransition.isTransitionTypeEnabled(r.android.animation.LayoutTransition.CHANGE_DISAPPEARING) ||
				layoutTransition.isTransitionTypeEnabled(r.android.animation.LayoutTransition.DISAPPEARING)
				)) {
			addToBufferedRunnables(() -> ViewGroupImpl.nativeRemoveView(widget));          
		} else {
			ViewGroupImpl.nativeRemoveView(widget);
		}
	}
	
	@Override
	public void add(IWidget w, int index) {
		if (index != -2) {
			View view = (View) w.asWidget();
			createLayoutParams(view);
			    if (index == -1) {
			        timePicker.addView(view);
			    } else {
			        timePicker.addView(view, index);
			    }
		}
		
		ViewGroupImpl.nativeAddView(asNativeWidget(), w.asNativeWidget());
		super.add(w, index);
	}
	
	private void createLayoutParams(View view) {
		com.ashera.datetime.TimePicker.LayoutParams layoutParams = (com.ashera.datetime.TimePicker.LayoutParams) view.getLayoutParams();
		
		layoutParams = (com.ashera.datetime.TimePicker.LayoutParams) view.getLayoutParams();
		if (layoutParams == null) {
			layoutParams = new com.ashera.datetime.TimePicker.LayoutParams(-2, -2);
			view.setLayoutParams(layoutParams);
		}  else {
			layoutParams.height = -2;
			layoutParams.width = -2;
		}
	}
	
	private com.ashera.datetime.TimePicker.LayoutParams getLayoutParams(View view) {
		return (com.ashera.datetime.TimePicker.LayoutParams) view.getLayoutParams();		
	}
	
	@SuppressLint("NewApi")
	@Override
	public void setChildAttribute(IWidget w, WidgetAttribute key, String strValue, Object objValue) {
		View view = (View) w.asWidget();
		com.ashera.datetime.TimePicker.LayoutParams layoutParams = getLayoutParams(view);
		ViewGroupImpl.setChildAttribute(w, key, objValue, layoutParams);		
		
		switch (key.getAttributeName()) {
		case "layout_width":
			layoutParams.width = (int) objValue;
			break;	
		case "layout_height":
			layoutParams.height = (int) objValue;
			break;
		default:
			break;
		}
		
		
		view.setLayoutParams(layoutParams);		
	}
	
	@SuppressLint("NewApi")
	@Override
	public Object getChildAttribute(IWidget w, WidgetAttribute key) {
		Object attributeValue = ViewGroupImpl.getChildAttribute(w, key);		
		if (attributeValue != null) {
			return attributeValue;
		}
		View view = (View) w.asWidget();
		com.ashera.datetime.TimePicker.LayoutParams layoutParams = getLayoutParams(view);

		switch (key.getAttributeName()) {
		case "layout_width":
			return layoutParams.width;
		case "layout_height":
			return layoutParams.height;
		}
		
		return null;

	}
	
		
	public class TimePickerExt extends com.ashera.datetime.TimePicker implements ILifeCycleDecorator, com.ashera.widget.IMaxDimension{
		private MeasureEvent measureFinished = new MeasureEvent();
		private OnLayoutEvent onLayoutEvent = new OnLayoutEvent();
		private List<IWidget> overlays;
		public IWidget getWidget() {
			return TimePickerImpl.this;
		}
		private int mMaxWidth = -1;
		private int mMaxHeight = -1;
		@Override
		public void setMaxWidth(int width) {
			mMaxWidth = width;
		}
		@Override
		public void setMaxHeight(int height) {
			mMaxHeight = height;
		}
		@Override
		public int getMaxWidth() {
			return mMaxWidth;
		}
		@Override
		public int getMaxHeight() {
			return mMaxHeight;
		}

		public TimePickerExt() {
			super();
			
		}
		
		@Override
		public void onMeasure(int widthMeasureSpec, int heightMeasureSpec) {

			if(mMaxWidth > 0) {
	        	widthMeasureSpec = MeasureSpec.makeMeasureSpec(mMaxWidth, MeasureSpec.AT_MOST);
	        }
	        if(mMaxHeight > 0) {
	            heightMeasureSpec = MeasureSpec.makeMeasureSpec(mMaxHeight, MeasureSpec.AT_MOST);

	        }

	        super.onMeasure(widthMeasureSpec, heightMeasureSpec);
			IWidgetLifeCycleListener listener = (IWidgetLifeCycleListener) getListener();
			if (listener != null) {
			    measureFinished.setWidth(getMeasuredWidth());
			    measureFinished.setHeight(getMeasuredHeight());
				listener.eventOccurred(EventId.measureFinished, measureFinished);
			}
		}
		
		@Override
		protected void onLayout(boolean changed, int l, int t, int r, int b) {
			super.onLayout(changed, l, t, r, b);
			ViewImpl.setDrawableBounds(TimePickerImpl.this, l, t, r, b);
			if (!isOverlay()) {
			ViewImpl.nativeMakeFrame(asNativeWidget(), l, t, r, b);
			}
			replayBufferedEvents();
	        ViewImpl.redrawDrawables(TimePickerImpl.this);
	        overlays = ViewImpl.drawOverlay(TimePickerImpl.this, overlays);
			
			IWidgetLifeCycleListener listener = (IWidgetLifeCycleListener) getListener();
			if (listener != null) {
				onLayoutEvent.setB(b);
				onLayoutEvent.setL(l);
				onLayoutEvent.setR(r);
				onLayoutEvent.setT(t);
				onLayoutEvent.setChanged(changed);
				listener.eventOccurred(EventId.onLayout, onLayoutEvent);
			}
			
			if (isInvalidateOnFrameChange() && isInitialised()) {
				TimePickerImpl.this.invalidate();
			}
		}	
		
		@Override
		public void execute(String method, Object... canvas) {
			
		}

		public void updateMeasuredDimension(int width, int height) {
			setMeasuredDimension(width, height);
		}


		@Override
		public ILifeCycleDecorator newInstance(IWidget widget) {
			throw new UnsupportedOperationException();
		}

		@Override
		public void setAttribute(WidgetAttribute widgetAttribute,
				String strValue, Object objValue) {
			throw new UnsupportedOperationException();
		}		
		

		@Override
		public List<String> getMethods() {
			throw new UnsupportedOperationException();
		}
		
		@Override
		public void initialized() {
			throw new UnsupportedOperationException();
		}
		
        @Override
        public Object getAttribute(WidgetAttribute widgetAttribute) {
            throw new UnsupportedOperationException();
        }
        @Override
        public void drawableStateChanged() {
        	super.drawableStateChanged();
        	if (!isWidgetDisposed()) {
        		ViewImpl.drawableStateChanged(TimePickerImpl.this);
        	}
        }
        private Map<String, IWidget> templates;
    	@Override
    	public r.android.view.View inflateView(java.lang.String layout) {
    		if (templates == null) {
    			templates = new java.util.HashMap<String, IWidget>();
    		}
    		IWidget template = templates.get(layout);
    		if (template == null) {
    			template = (IWidget) quickConvert(layout, "template");
    			templates.put(layout, template);
    		}
    		
    		IWidget widget = template.loadLazyWidgets(TimePickerImpl.this);
			return (View) widget.asWidget();
    	}   
        
    	@Override
		public void remeasure() {
    		if (getFragment() != null) {
    			getFragment().remeasure();
    		}
		}
    	
        @Override
		public void removeFromParent() {
        	TimePickerImpl.this.getParent().remove(TimePickerImpl.this);
		}
        @Override
        public void getLocationOnScreen(int[] appScreenLocation) {
        	appScreenLocation[0] = htmlElement.getBoundingClientRect().getLeft();
        	appScreenLocation[1] = htmlElement.getBoundingClientRect().getTop();
        }
        @Override
        public void getWindowVisibleDisplayFrame(r.android.graphics.Rect displayFrame){
        	
        	org.teavm.jso.dom.html.TextRectangle boundingClientRect = htmlElement.getBoundingClientRect();
			displayFrame.top = boundingClientRect.getTop();
        	displayFrame.left = boundingClientRect.getLeft();
        	displayFrame.bottom = boundingClientRect.getBottom();
        	displayFrame.right = boundingClientRect.getRight();
        }
        @Override
		public void offsetTopAndBottom(int offset) {
			super.offsetTopAndBottom(offset);
			ViewImpl.nativeMakeFrame(asNativeWidget(), getLeft(), getTop(), getRight(), getBottom());
		}
		@Override
		public void offsetLeftAndRight(int offset) {
			super.offsetLeftAndRight(offset);
			ViewImpl.nativeMakeFrame(asNativeWidget(), getLeft(), getTop(), getRight(), getBottom());
		}
		@Override
		public void setMyAttribute(String name, Object value) {
			if (name.equals("state0")) {
				setState0(value);
				return;
			}
			if (name.equals("state1")) {
				setState1(value);
				return;
			}
			if (name.equals("state2")) {
				setState2(value);
				return;
			}
			if (name.equals("state3")) {
				setState3(value);
				return;
			}
			if (name.equals("state4")) {
				setState4(value);
				return;
			}
			TimePickerImpl.this.setAttribute(name, value, !(value instanceof String));
		}
        @Override
        public void setVisibility(int visibility) {
            super.setVisibility(visibility);
            ((HTMLElement)asNativeWidget()).getStyle().setProperty("display", visibility != View.VISIBLE ? "none" : "block");
            
        }
        
    	public void setState0(Object value) {
    		ViewImpl.setState(TimePickerImpl.this, 0, value);
    	}
    	public void setState1(Object value) {
    		ViewImpl.setState(TimePickerImpl.this, 1, value);
    	}
    	public void setState2(Object value) {
    		ViewImpl.setState(TimePickerImpl.this, 2, value);
    	}
    	public void setState3(Object value) {
    		ViewImpl.setState(TimePickerImpl.this, 3, value);
    	}
    	public void setState4(Object value) {
    		ViewImpl.setState(TimePickerImpl.this, 4, value);
    	}
        	public void state0() {
        		ViewImpl.state(TimePickerImpl.this, 0);
        	}
        	public void state1() {
        		ViewImpl.state(TimePickerImpl.this, 1);
        	}
        	public void state2() {
        		ViewImpl.state(TimePickerImpl.this, 2);
        	}
        	public void state3() {
        		ViewImpl.state(TimePickerImpl.this, 3);
        	}
        	public void state4() {
        		ViewImpl.state(TimePickerImpl.this, 4);
        	}
                        
        public void stateYes() {
        	ViewImpl.stateYes(TimePickerImpl.this);
        	
        }
        
        public void stateNo() {
        	ViewImpl.stateNo(TimePickerImpl.this);
        }
     
		@Override
		public void endViewTransition(r.android.view.View view) {
			super.endViewTransition(view);
			runBufferedRunnables();
		}
	
	}
	@Override
	public Class getViewClass() {
		return TimePickerExt.class;
	}
	
	@SuppressLint("NewApi")
	@Override
	public void setAttribute(WidgetAttribute key, String strValue, Object objValue, ILifeCycleDecorator decorator) {
				ViewGroupImpl.setAttribute(this,  key, strValue, objValue, decorator);
		Object nativeWidget = asNativeWidget();
		switch (key.getAttributeName()) {
			case "timeFormat": {


		 setTimeFormat(objValue);



			}
			break;
			case "hint": {


		 setHint(key, strValue, objValue, decorator);



			}
			break;
			case "text": {


		setMyText(key, strValue, objValue, decorator);



			}
			break;
			case "showClearButton": {


		 showClearButton(objValue);



			}
			break;
			case "hintTextFormat": {


		setHintTextFormat(objValue);



			}
			break;
			case "onTextChange": {


		 setOnTextChange(key, strValue, objValue, decorator);



			}
			break;
			case "onbeforeTextChange": {


		 setBeforeOnTextChange(key, strValue, objValue, decorator);



			}
			break;
			case "onafterTextChange": {


		 setOnAfterTextChange(key, strValue, objValue, decorator);



			}
			break;
		default:
			break;
		}
		postSetAttribute(key, strValue, objValue, decorator);
	}
	
	@Override
	@SuppressLint("NewApi")
	public Object getAttribute(WidgetAttribute key, ILifeCycleDecorator decorator) {
		Object attributeValue = ViewGroupImpl.getAttribute(this, key, decorator);
		if (attributeValue != null) {
			return attributeValue;
		}
		Object nativeWidget = asNativeWidget();
		switch (key.getAttributeName()) {
			case "hint": {
return getHint(key, decorator);			}
			case "text": {
return getMyText(key, decorator);			}
		}
		return null;
	}


	@Override
    public Object asNativeWidget() {
        return htmlElement;
    }
    
    @Override
    public void requestLayout() {
    	if (isInitialised()) {
    		ViewImpl.requestLayout(this, asNativeWidget());
    	}
    }
    
    @Override
    public void invalidate() {
    	if (isInitialised()) {
    		ViewImpl.invalidate(this, asNativeWidget());
    	}
    }
    
	

	private void setHint(WidgetAttribute key, String strValue, Object objValue, ILifeCycleDecorator decorator) {
		editText.setAttribute(key, strValue, objValue, decorator);
	}
	
	private Object getHint(WidgetAttribute key, ILifeCycleDecorator decorator) {
		return editText.getAttribute(key, decorator);
	}
	
	@Override
	public String getTextEntered() {
		if (editText instanceof com.ashera.validations.FormElement) {
			return ((com.ashera.validations.FormElement) editText).getTextEntered();
		}
		return null;
	}

	@Override
	public boolean isViewVisible() {
		return timePicker.getVisibility() == View.VISIBLE;
	}

	@Override
	public void focus() {
		if (editText instanceof com.ashera.validations.FormElement) {
			((com.ashera.validations.FormElement) editText).focus();
		}
	}
	
	
	private void postSetAttribute(WidgetAttribute key, String strValue, Object objValue,
			ILifeCycleDecorator decorator) {
		switch (key.getAttributeName()) {
		case "validationErrorDisplayType":
			if (editText instanceof com.ashera.validations.FormElement) {
				((com.ashera.validations.FormElement) editText).setValidationErrorDisplayType(getValidationErrorDisplayType());
			}
			break;

		default:
			break;
		}
		
	}
	
	
	private void setMyText(WidgetAttribute key, String strValue, Object objValue, ILifeCycleDecorator decorator) {
		editText.setAttribute(key, strValue, objValue, decorator);
	}

	private Object getMyText(WidgetAttribute key, ILifeCycleDecorator decorator) {
		return editText.getAttribute(key, decorator);
	}
	
	
	private void setOnAfterTextChange(WidgetAttribute key, String strValue, Object objValue, ILifeCycleDecorator decorator) {
		editText.setAttribute(key, strValue, new TextChangedListener(this, strValue, "onafterTextChange"), decorator);
	}

	private void setBeforeOnTextChange(WidgetAttribute key, String strValue, Object objValue, ILifeCycleDecorator decorator) {
		editText.setAttribute(key, strValue, new TextChangedListener(this, strValue, "onbeforeTextChange"), decorator);
		
	}

	private void setOnTextChange(WidgetAttribute key, String strValue, Object objValue, ILifeCycleDecorator decorator) {
		editText.setAttribute(key, strValue, new TextChangedListener(this, strValue, "onTextChange"), decorator);
		
	}
	
	private void showClearButton(Object objValue) {
		IWidget clearButton = findWidgetById("@+id/clearButton");
		int visibility = View.VISIBLE;
		
		if ((boolean) objValue) {
			visibility = View.VISIBLE;
		} else {
			visibility = View.GONE;
		}
		
		clearButton.setAttribute("visibility", visibility, true);
		
	}
	


	private int hour;
	private int minute;
	private java.text.DateFormat timeFormat;
	private BaseHasWidgets datePickerWidget;
	private final static String DISPLAY_FORMAT = "HH:mm";
	private IWidget editText;

	public void initTimePicker() {
		timeFormat = new SimpleDateFormat(DISPLAY_FORMAT, java.util.Locale.getDefault());
		IWidget pickerTemplate = (IWidget) com.ashera.converter.ConverterFactory.get("template").convertFrom("@layout/timepicker", null, fragment);
		datePickerWidget = (BaseHasWidgets) pickerTemplate.loadLazyWidgets(this);
		editText = datePickerWidget.findWidgetById("@+id/editText");
		
		
		IWidget clearButton = findWidgetById("@+id/clearButton");
		setOnClickListener(clearButton, new View.OnClickListener() {
			@Override
			public void onClick(View v) {
				setTime(-1, -1);;
			}
		});
	}

	private void setTimeFormat(Object objValue) {
		timeFormat = new SimpleDateFormat((String) objValue, java.util.Locale.getDefault());
	}
	private void setNow() {
		Calendar c = Calendar.getInstance();
		setTime(c.get(Calendar.HOUR_OF_DAY), c.get(Calendar.MINUTE));
	}

	private void setTime(int hour, int minute) {
		this.hour = hour;
		this.minute = minute;
		updateText();
	}
	

	private void setTimeFormat(java.text.DateFormat timeFormat) {
		this.timeFormat = timeFormat;
		updateText();
	}
	
	
	private void updateText() {
		if (hour == -1 || minute == -1) {
			editText.setAttribute("text", "", true);
		} else {
			Calendar cal = new GregorianCalendar(0,0,0, hour, minute);
			editText.setAttribute("text", timeFormat.format(cal.getTime()), true);
		}
	}
	


	@Override
	public void resetError() {
		int validationErrorDisplayType = getValidationErrorDisplayType();
		if ((validationErrorDisplayType & com.ashera.validations.FormElement.ERROR_DISPLAY_TYPE_POPUP) != 0) {
			setError(null);	
		}
		
		if ((validationErrorDisplayType & com.ashera.validations.FormElement.ERROR_DISPLAY_TYPE_LABEL) != 0) {
			ViewImpl.setMessageOnLabel(this, "");	
		}
		
		if ((validationErrorDisplayType & com.ashera.validations.FormElement.ERROR_DISPLAY_TYPE_STYLE) != 0) {
			ViewImpl.setStyle(this, getNormalStyle());
		}
	}

	@Override
	public void showError(String message) {
		int validationErrorDisplayType = getValidationErrorDisplayType();
		if ((validationErrorDisplayType & com.ashera.validations.FormElement.ERROR_DISPLAY_TYPE_POPUP) != 0) {
			setError(message);
		}
		
		if ((validationErrorDisplayType & com.ashera.validations.FormElement.ERROR_DISPLAY_TYPE_LABEL) != 0) {
			ViewImpl.setMessageOnLabel(this, message);
		}
		
		if ((validationErrorDisplayType & com.ashera.validations.FormElement.ERROR_DISPLAY_TYPE_STYLE) != 0) {
			ViewImpl.setStyle(this, getErrorStyle());
		}
	}
	


	private void setHintTextFormat(Object objValue) {
		applyAttributeCommand("hint", CommonConverters.command_textformatter, new String[] {"hintTextFormat"}, true, (String) objValue);
	}
	

	@SuppressLint("NewApi")
private static class TextChangedListener implements TextWatcher, com.ashera.widget.IListener{
private IWidget w; private View view; private String strValue; private String action;
public String getAction() {return action;}
public TextChangedListener(IWidget w, String strValue)  {
this.w = w; this.strValue = strValue;
}
public TextChangedListener(IWidget w, String strValue, String action)  {
this.w = w; this.strValue = strValue;this.action=action;
}
public void afterTextChanged (Editable s){
    
	if (action == null || action.equals("onafterTextChange")) {
		// populate the data from ui to pojo
		w.syncModelFromUiToPojo("onafterTextChange");
	    java.util.Map<String, Object> obj = getOnafterTextChangeEventObj(s);
	    String commandName =  (String) obj.get(EventExpressionParser.KEY_COMMAND_NAME);
	    
	    // execute command based on command type
	    String commandType = (String)obj.get(EventExpressionParser.KEY_COMMAND_TYPE);
		switch (commandType) {
		case "+":
		    if (EventCommandFactory.hasCommand(commandName)) {
		    	 EventCommandFactory.getCommand(commandName).executeCommand(w, obj, s);
		    }

			break;
		default:
			break;
		}
		
		if (obj.containsKey("refreshUiFromModel")) {
			Object widgets = obj.remove("refreshUiFromModel");
			com.ashera.layout.ViewImpl.refreshUiFromModel(w, widgets, true);
		}
		if (w.getModelUiToPojoEventIds() != null) {
			com.ashera.layout.ViewImpl.refreshUiFromModel(w, w.getModelUiToPojoEventIds(), true);
		}
		if (strValue != null && !strValue.isEmpty() && !strValue.trim().startsWith("+")) {
		    com.ashera.core.IActivity activity = (com.ashera.core.IActivity)w.getFragment().getRootActivity();
		    if (activity != null) {
		    	activity.sendEventMessage(obj);
		    }
		}
	}
    return;
}//
public void beforeTextChanged (CharSequence s, 
                int start, 
                int count, 
                int after){
    
	if (action == null || action.equals("onbeforeTextChange")) {
		// populate the data from ui to pojo
		w.syncModelFromUiToPojo("onbeforeTextChange");
	    java.util.Map<String, Object> obj = getOnbeforeTextChangeEventObj(s,start,count,after);
	    String commandName =  (String) obj.get(EventExpressionParser.KEY_COMMAND_NAME);
	    
	    // execute command based on command type
	    String commandType = (String)obj.get(EventExpressionParser.KEY_COMMAND_TYPE);
		switch (commandType) {
		case "+":
		    if (EventCommandFactory.hasCommand(commandName)) {
		    	 EventCommandFactory.getCommand(commandName).executeCommand(w, obj, s,start,count,after);
		    }

			break;
		default:
			break;
		}
		
		if (obj.containsKey("refreshUiFromModel")) {
			Object widgets = obj.remove("refreshUiFromModel");
			com.ashera.layout.ViewImpl.refreshUiFromModel(w, widgets, true);
		}
		if (w.getModelUiToPojoEventIds() != null) {
			com.ashera.layout.ViewImpl.refreshUiFromModel(w, w.getModelUiToPojoEventIds(), true);
		}
		if (strValue != null && !strValue.isEmpty() && !strValue.trim().startsWith("+")) {
		    com.ashera.core.IActivity activity = (com.ashera.core.IActivity)w.getFragment().getRootActivity();
		    if (activity != null) {
		    	activity.sendEventMessage(obj);
		    }
		}
	}
    return;
}//
public void onTextChanged (CharSequence s, 
                int start, 
                int before, 
                int count){
    
	if (action == null || action.equals("onTextChange")) {
		// populate the data from ui to pojo
		w.syncModelFromUiToPojo("onTextChange");
	    java.util.Map<String, Object> obj = getOnTextChangeEventObj(s,start,before,count);
	    String commandName =  (String) obj.get(EventExpressionParser.KEY_COMMAND_NAME);
	    
	    // execute command based on command type
	    String commandType = (String)obj.get(EventExpressionParser.KEY_COMMAND_TYPE);
		switch (commandType) {
		case "+":
		    if (EventCommandFactory.hasCommand(commandName)) {
		    	 EventCommandFactory.getCommand(commandName).executeCommand(w, obj, s,start,before,count);
		    }

			break;
		default:
			break;
		}
		
		if (obj.containsKey("refreshUiFromModel")) {
			Object widgets = obj.remove("refreshUiFromModel");
			com.ashera.layout.ViewImpl.refreshUiFromModel(w, widgets, true);
		}
		if (w.getModelUiToPojoEventIds() != null) {
			com.ashera.layout.ViewImpl.refreshUiFromModel(w, w.getModelUiToPojoEventIds(), true);
		}
		if (strValue != null && !strValue.isEmpty() && !strValue.trim().startsWith("+")) {
		    com.ashera.core.IActivity activity = (com.ashera.core.IActivity)w.getFragment().getRootActivity();
		    if (activity != null) {
		    	activity.sendEventMessage(obj);
		    }
		}
	}
    return;
}//#####

public java.util.Map<String, Object> getOnTextChangeEventObj(CharSequence s,int start,int before,int count) {
	java.util.Map<String, Object> obj = com.ashera.widget.PluginInvoker.getJSONCompatMap();
    obj.put("action", "action");
    obj.put("eventType", "textchange");
    obj.put("fragmentId", w.getFragment().getFragmentId());
    obj.put("actionUrl", w.getFragment().getActionUrl());
    obj.put("namespace", w.getFragment().getNamespace());
    
    if (w.getComponentId() != null) {
    	obj.put("componentId", w.getComponentId());
    }
    
    PluginInvoker.putJSONSafeObjectIntoMap(obj, "id", w.getId());
     
        PluginInvoker.putJSONSafeObjectIntoMap(obj, "s", String.valueOf(s));
        PluginInvoker.putJSONSafeObjectIntoMap(obj, "start", start);
        PluginInvoker.putJSONSafeObjectIntoMap(obj, "before", before);
        PluginInvoker.putJSONSafeObjectIntoMap(obj, "count", count);
    
    // parse event info into the map
    EventExpressionParser.parseEventExpression(strValue, obj);
    
    // update model data into map
    w.updateModelToEventMap(obj, "onTextChange", (String)obj.get(EventExpressionParser.KEY_EVENT_ARGS));
    return obj;
}

public java.util.Map<String, Object> getOnbeforeTextChangeEventObj(CharSequence s,int start,int count,int after) {
	java.util.Map<String, Object> obj = com.ashera.widget.PluginInvoker.getJSONCompatMap();
    obj.put("action", "action");
    obj.put("eventType", "beforetextchange");
    obj.put("fragmentId", w.getFragment().getFragmentId());
    obj.put("actionUrl", w.getFragment().getActionUrl());
    obj.put("namespace", w.getFragment().getNamespace());
    
    if (w.getComponentId() != null) {
    	obj.put("componentId", w.getComponentId());
    }
    
    PluginInvoker.putJSONSafeObjectIntoMap(obj, "id", w.getId());
     
        PluginInvoker.putJSONSafeObjectIntoMap(obj, "s", String.valueOf(s));
        PluginInvoker.putJSONSafeObjectIntoMap(obj, "start", start);
        PluginInvoker.putJSONSafeObjectIntoMap(obj, "count", count);
        PluginInvoker.putJSONSafeObjectIntoMap(obj, "after", after);
    
    // parse event info into the map
    EventExpressionParser.parseEventExpression(strValue, obj);
    
    // update model data into map
    w.updateModelToEventMap(obj, "onbeforeTextChange", (String)obj.get(EventExpressionParser.KEY_EVENT_ARGS));
    return obj;
}

public java.util.Map<String, Object> getOnafterTextChangeEventObj(Editable s) {
	java.util.Map<String, Object> obj = com.ashera.widget.PluginInvoker.getJSONCompatMap();
    obj.put("action", "action");
    obj.put("eventType", "aftertextchange");
    obj.put("fragmentId", w.getFragment().getFragmentId());
    obj.put("actionUrl", w.getFragment().getActionUrl());
    obj.put("namespace", w.getFragment().getNamespace());
    
    if (w.getComponentId() != null) {
    	obj.put("componentId", w.getComponentId());
    }
    
    PluginInvoker.putJSONSafeObjectIntoMap(obj, "id", w.getId());
     
    
    // parse event info into the map
    EventExpressionParser.parseEventExpression(strValue, obj);
    
    // update model data into map
    w.updateModelToEventMap(obj, "onafterTextChange", (String)obj.get(EventExpressionParser.KEY_EVENT_ARGS));
    return obj;
}
}


	@Override
	public void setId(String id){
		if (id != null && !id.equals("")){
			super.setId(id);
			timePicker.setId((int) quickConvert(id, "id"));
		}
	}
	
    
    @Override
    public void setVisible(boolean b) {
        ((View)asWidget()).setVisibility(b ? View.VISIBLE : View.GONE);
    }

		//end - body

	private void nativeCreate(Map<String, Object> params) {
		htmlElement = org.teavm.jso.dom.html.HTMLDocument.current().createElement("div");
		htmlElement.getStyle().setProperty("box-sizing", "border-box");
		initTimePicker();
		IWidget imageButton = datePickerWidget.findWidgetById("@+id/imageButton");
		ViewImpl.setOnListener(imageButton, imageButton.asNativeWidget(), (event) -> {
			showTimepicker((HTMLElement) editText.asNativeWidget(), (hour, minute) -> {
				setTime(hour, minute);
			}, () -> {
				String text = (String) editText.getAttribute(WidgetFactory.getAttribute(editText.getLocalName(), "text"), null);
				
				if (text != null && !text.isEmpty()) {
					try {
						text = new java.text.SimpleDateFormat(DISPLAY_FORMAT).format(timeFormat.parse(text));
					} catch (Exception e) {
						return "";
					}
				}
				return text;
			});
		}, "click", "click");
		
		registerForAttributeCommandChain("hint");
	}

	@org.teavm.jso.JSBody(params = { "input", "myformatter", "myparser" }, script = "var timePicker = new DateTimePicker.Time({\n"
			+ "      default: myparser(),\n"
			+ "      minuteStep: 1\n"
			+ "    })\n"
			+ "    timePicker.on('selected', function (formatTime, now) {\n"
			+ "      myformatter(now.getHours(), now.getMinutes())\n"
			+ "		 timePicker.destroy()\n"
			+ "    })\n"
			+ "    timePicker.on('cleared', function () {\n"
			+ "      myformatter(-1, -1)\n"
			+ "		timePicker.destroy()\n"
			+ "    })\n"
			+ "		timePicker.on('canceled', function () {\n"
			+"		timePicker.destroy()\n"
			+ "    })")
    private static native void showTimepicker(org.teavm.jso.dom.html.HTMLElement input, TimeFormatter myformatter, TimeParser myparser);
	
	@org.teavm.jso.JSFunctor
	public interface TimeFormatter extends org.teavm.jso.JSObject {
	    void formatTime(int hour, int minute);
	}
	
	@org.teavm.jso.JSFunctor
	public interface TimeParser extends org.teavm.jso.JSObject {
	    String parseTime();
	}
	
	private void setOnClickListener(IWidget clearButton, OnClickListener onClickListener) {
		ViewImpl.setOnListener(clearButton, clearButton.asNativeWidget(), (event) -> {
			onClickListener.onClick((View) clearButton.asWidget());
		}, "click", "click");
		
	}
	
	private void setError(String message) {
	}
}
