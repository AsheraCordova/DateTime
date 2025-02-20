package com.ashera.datetime;

//start - imports
import java.util.*;

import android.annotation.SuppressLint;
import android.content.Context;
import android.os.Build;
import android.view.*;
import android.widget.*;
import android.view.View.*;

import com.ashera.widget.BaseHasWidgets;

import android.annotation.SuppressLint;

import com.ashera.core.IFragment;
import com.ashera.widget.bus.*;
import com.ashera.converter.*;
import com.ashera.widget.bus.Event.*;
import com.ashera.widget.*;
import com.ashera.widget.IWidgetLifeCycleListener.*;
import com.ashera.layout.*;

import android.graphics.Canvas;
import android.widget.*;
import androidx.core.view.*;
import android.view.*;

import static com.ashera.widget.IWidget.*;
//end - imports

import android.app.DatePickerDialog;
import android.widget.DatePicker;
import java.text.SimpleDateFormat;
import android.text.*;

public class DatePickerImpl extends BaseHasWidgets implements DatePickerDialog.OnDateSetListener, com.ashera.validations.FormElement {
	//start - body
	public final static String LOCAL_NAME = "com.ashera.datetime.DatePicker"; 
	public final static String GROUP_NAME = "com.ashera.datetime.DatePicker";
	private com.ashera.datetime.DatePicker datePicker;
	

	
	@Override
	public void loadAttributes(String localName) {
		ViewGroupImpl.register(localName);

		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("dateFormat").withType("resourcestring"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("hint").withType("resourcestring"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("minDateToday").withType("boolean"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("maxDateToday").withType("boolean"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("text").withType("resourcestring"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("onTextChange").withType("string"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("onbeforeTextChange").withType("string"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("onafterTextChange").withType("string"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("showClearButton").withType("boolean"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("hintTextFormat").withType("resourcestring").withOrder(-1));
	
	}
	
	public DatePickerImpl() {
		super(GROUP_NAME, LOCAL_NAME);
	}
	public  DatePickerImpl(String localname) {
		super(GROUP_NAME, localname);
	}
	public  DatePickerImpl(String groupName, String localname) {
		super(groupName, localname);
	}

	@Override
	public IWidget newInstance() {
		return new DatePickerImpl(groupName, localName);
	}
	
	@SuppressLint("NewApi")
	@Override
	public void create(IFragment fragment, Map<String, Object> params) {
		super.create(fragment, params);
Context context = (Context) fragment.getRootActivity();
	Object systemStyle = params.get("systemStyle");
	Object systemAndroidAttrStyle = params.get("systemAndroidAttrStyle");
	
	if (systemStyle == null && systemAndroidAttrStyle == null) {
		datePicker = new DatePickerExt(context);
	} else {
		int defStyleAttr = 0;
		int defStyleRes = 0;
		
		if (systemStyle != null) {
			defStyleRes = context.getResources().getIdentifier((String) systemStyle, "style", context.getPackageName());	
		}
		
		if (systemAndroidAttrStyle != null) {
			defStyleAttr = context.getResources().getIdentifier((String) systemAndroidAttrStyle, "attr", "android");	
		}
		
		if (defStyleRes == 0) {
			datePicker = new DatePickerExt(context, null, defStyleAttr);	
		} else {
			datePicker = new DatePickerExt(context, null, defStyleAttr, defStyleRes);
		}
		
	}

		
		nativeCreate(params);
		
		
		ViewGroupImpl.registerCommandConveter(this);

	}

	@Override
	public Object asWidget() {
		return datePicker;
	}

	@Override
	public boolean remove(IWidget w) {
		boolean remove = super.remove(w);
		datePicker.removeView((View) w.asWidget());
		return remove;
	}
	
	@Override
    public boolean remove(int index) {
		IWidget widget = widgets.get(index);
        boolean remove = super.remove(index);

        if (index + 1 <= datePicker.getChildCount()) {
            datePicker.removeViewAt(index);
        }    
        return remove;
    }

	
	@Override
	public void add(IWidget w, int index) {
		if (index != -2) {
			View view = (View) w.asWidget();
			createLayoutParams(view);
			    if (index == -1) {
			        datePicker.addView(view);
			    } else {
			        datePicker.addView(view, index);
			    }
		}
		
		ViewGroupImpl.nativeAddView(asNativeWidget(), w.asNativeWidget());
		super.add(w, index);
	}
	
	private void createLayoutParams(View view) {
		com.ashera.datetime.DatePicker.LayoutParams layoutParams = (com.ashera.datetime.DatePicker.LayoutParams) view.getLayoutParams();
		
		layoutParams = (com.ashera.datetime.DatePicker.LayoutParams) view.getLayoutParams();
		if (layoutParams == null) {
			layoutParams = new com.ashera.datetime.DatePicker.LayoutParams(-2, -2);
			view.setLayoutParams(layoutParams);
		}  else {
			layoutParams.height = -2;
			layoutParams.width = -2;
		}
	}
	
	private com.ashera.datetime.DatePicker.LayoutParams getLayoutParams(View view) {
		return (com.ashera.datetime.DatePicker.LayoutParams) view.getLayoutParams();		
	}
	
	@SuppressLint("NewApi")
	@Override
	public void setChildAttribute(IWidget w, WidgetAttribute key, String strValue, Object objValue) {
		View view = (View) w.asWidget();
		com.ashera.datetime.DatePicker.LayoutParams layoutParams = getLayoutParams(view);
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
		com.ashera.datetime.DatePicker.LayoutParams layoutParams = getLayoutParams(view);

		switch (key.getAttributeName()) {
		case "layout_width":
			return layoutParams.width;
		case "layout_height":
			return layoutParams.height;
		}
		
		return null;

	}
	
		
	public class DatePickerExt extends com.ashera.datetime.DatePicker implements ILifeCycleDecorator, com.ashera.widget.IMaxDimension{
		private MeasureEvent measureFinished = new MeasureEvent();
		private OnLayoutEvent onLayoutEvent = new OnLayoutEvent();
		
		public IWidget getWidget() {
			return DatePickerImpl.this;
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

		public DatePickerExt(Context context, android.util.AttributeSet attrs, int defStyleAttr) {
	        super(context, attrs, defStyleAttr);
	    }

	    public DatePickerExt(Context context, android.util.AttributeSet attrs, int defStyleAttr, int defStyleRes) {
	    	super(context, attrs, defStyleAttr, defStyleRes);
	    }
		public DatePickerExt(Context context) {
			super(context);
			
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
			
			ViewImpl.nativeMakeFrame(asNativeWidget(), l, t, r, b);
			
			replayBufferedEvents();
			
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
				DatePickerImpl.this.invalidate();
			}
		}	
		
		@Override
		public void onDraw(Canvas canvas) {
			Runnable runnable = () -> super.onDraw(canvas);
			executeMethodListeners("onDraw", runnable, canvas);
		}

		@Override
		public void draw(Canvas canvas) {
			Runnable runnable = () -> super.draw(canvas);
			executeMethodListeners("draw", runnable, canvas);
		}

		@SuppressLint("WrongCall")
		@Override
		public void execute(String method, Object... args) {
			switch (method) {
				case "onDraw":
					setOnMethodCalled(true);
					super.onDraw((Canvas) args[0]);
					break;

				case "draw":
					setOnMethodCalled(true);
					super.draw((Canvas) args[0]);
					break;

				default:
					break;
			}
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
        		ViewImpl.drawableStateChanged(DatePickerImpl.this);
        	}
        }
        
    	public void setState0(float value) {
    		ViewImpl.setState(DatePickerImpl.this, 0, value);
    	}
    	public void setState0(int value) {
    		ViewImpl.setState(DatePickerImpl.this, 0, value);
    	}
    	public void setState0(double value) {
    		ViewImpl.setState(DatePickerImpl.this, 0, value);
    	}
    	
    	public void setState0(Float value) {
    		ViewImpl.setState(DatePickerImpl.this, 0, value);
    	}
    	public void setState0(Integer value) {
    		ViewImpl.setState(DatePickerImpl.this, 0, value);
    	}
    	public void setState0(Double value) {
    		ViewImpl.setState(DatePickerImpl.this, 0, value);
    	}
    	public void setState0(Object value) {
    		ViewImpl.setState(DatePickerImpl.this, 0, value);
    	}
    	public void setState1(float value) {
    		ViewImpl.setState(DatePickerImpl.this, 1, value);
    	}
    	public void setState1(int value) {
    		ViewImpl.setState(DatePickerImpl.this, 1, value);
    	}
    	public void setState1(double value) {
    		ViewImpl.setState(DatePickerImpl.this, 1, value);
    	}
    	
    	public void setState1(Float value) {
    		ViewImpl.setState(DatePickerImpl.this, 1, value);
    	}
    	public void setState1(Integer value) {
    		ViewImpl.setState(DatePickerImpl.this, 1, value);
    	}
    	public void setState1(Double value) {
    		ViewImpl.setState(DatePickerImpl.this, 1, value);
    	}
    	public void setState1(Object value) {
    		ViewImpl.setState(DatePickerImpl.this, 1, value);
    	}
    	public void setState2(float value) {
    		ViewImpl.setState(DatePickerImpl.this, 2, value);
    	}
    	public void setState2(int value) {
    		ViewImpl.setState(DatePickerImpl.this, 2, value);
    	}
    	public void setState2(double value) {
    		ViewImpl.setState(DatePickerImpl.this, 2, value);
    	}
    	
    	public void setState2(Float value) {
    		ViewImpl.setState(DatePickerImpl.this, 2, value);
    	}
    	public void setState2(Integer value) {
    		ViewImpl.setState(DatePickerImpl.this, 2, value);
    	}
    	public void setState2(Double value) {
    		ViewImpl.setState(DatePickerImpl.this, 2, value);
    	}
    	public void setState2(Object value) {
    		ViewImpl.setState(DatePickerImpl.this, 2, value);
    	}
    	public void setState3(float value) {
    		ViewImpl.setState(DatePickerImpl.this, 3, value);
    	}
    	public void setState3(int value) {
    		ViewImpl.setState(DatePickerImpl.this, 3, value);
    	}
    	public void setState3(double value) {
    		ViewImpl.setState(DatePickerImpl.this, 3, value);
    	}
    	
    	public void setState3(Float value) {
    		ViewImpl.setState(DatePickerImpl.this, 3, value);
    	}
    	public void setState3(Integer value) {
    		ViewImpl.setState(DatePickerImpl.this, 3, value);
    	}
    	public void setState3(Double value) {
    		ViewImpl.setState(DatePickerImpl.this, 3, value);
    	}
    	public void setState3(Object value) {
    		ViewImpl.setState(DatePickerImpl.this, 3, value);
    	}
    	public void setState4(float value) {
    		ViewImpl.setState(DatePickerImpl.this, 4, value);
    	}
    	public void setState4(int value) {
    		ViewImpl.setState(DatePickerImpl.this, 4, value);
    	}
    	public void setState4(double value) {
    		ViewImpl.setState(DatePickerImpl.this, 4, value);
    	}
    	
    	public void setState4(Float value) {
    		ViewImpl.setState(DatePickerImpl.this, 4, value);
    	}
    	public void setState4(Integer value) {
    		ViewImpl.setState(DatePickerImpl.this, 4, value);
    	}
    	public void setState4(Double value) {
    		ViewImpl.setState(DatePickerImpl.this, 4, value);
    	}
    	public void setState4(Object value) {
    		ViewImpl.setState(DatePickerImpl.this, 4, value);
    	}
        	public void state0() {
        		ViewImpl.state(DatePickerImpl.this, 0);
        	}
        	public void state1() {
        		ViewImpl.state(DatePickerImpl.this, 1);
        	}
        	public void state2() {
        		ViewImpl.state(DatePickerImpl.this, 2);
        	}
        	public void state3() {
        		ViewImpl.state(DatePickerImpl.this, 3);
        	}
        	public void state4() {
        		ViewImpl.state(DatePickerImpl.this, 4);
        	}
                        
        public void stateYes() {
        	ViewImpl.stateYes(DatePickerImpl.this);
        	
        }
        
        public void stateNo() {
        	ViewImpl.stateNo(DatePickerImpl.this);
        }
     
	
	}
	@Override
	public Class getViewClass() {
		return DatePickerExt.class;
	}
	
	@SuppressLint("NewApi")
	@Override
	public void setAttribute(WidgetAttribute key, String strValue, Object objValue, ILifeCycleDecorator decorator) {
				ViewGroupImpl.setAttribute(this,  key, strValue, objValue, decorator);
		Object nativeWidget = asNativeWidget();
		switch (key.getAttributeName()) {
			case "dateFormat": {


		 setDateFormat(objValue);



			}
			break;
			case "hint": {


		 setHint(key, strValue, objValue, decorator);



			}
			break;
			case "minDateToday": {


		 setMinDateToday(objValue);



			}
			break;
			case "maxDateToday": {


		 setMaxDateToday(objValue);



			}
			break;
			case "text": {


		setMyText(key, strValue, objValue, decorator);



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
			case "showClearButton": {


		 showClearButton(objValue);



			}
			break;
			case "hintTextFormat": {


		setHintTextFormat(objValue);



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
        return datePicker;
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
			datePicker.setId((int) quickConvert(id, "id"));
		}
	}
	
    

		//end - body

	//start - datepicker
	private BaseHasWidgets datePickerWidget;
	private final static String DISPLAY_FORMAT = "dd/MM/yyyy";
	private IWidget editText;
	private int year;
	private int month;
	private int day;
	private long maxDate = -1;
	private long minDate = -1;
	private SimpleDateFormat displayFormatter;

	private void updateText() {
		if (year == 0 && month == 0 && day == 0) {
			return;
		}
		if (year == -1 || month == -1 || day == -1) {
			editText.setAttribute("text", "", true);
		} else {
			Calendar cal = new GregorianCalendar(year, month, day);
			editText.setAttribute("text", displayFormatter.format(cal.getTime()), true);
		}
	}

	private void setMaxDate(int year, int month, int day) {
		Calendar c = Calendar.getInstance();
		c.set(year, month, day, 23, 59, 59);
		this.maxDate = c.getTimeInMillis();
	}

	private void setMinDate(int year, int month, int day) {
		Calendar c = Calendar.getInstance();
		c.set(year, month, day, 0, 0, 0);
		this.minDate = c.getTimeInMillis();
	}
	

	private void setDate(int year, int month, int day) {
		this.year = year;
		this.month = month;
		this.day = day;

		updateText();
	}
	

	private void setMinDateToday(Object objValue) {
		if ((boolean) objValue) {
			this.minDate = java.util.Calendar.getInstance().getTimeInMillis();
		} else {
			this.minDate = -1;
		}
	}
	
	
	private void setMaxDateToday(Object objValue) {
		if ((boolean) objValue) {
			this.maxDate = java.util.Calendar.getInstance().getTimeInMillis();
		} else {
			this.maxDate = -1;
		}
	}
	
	private void setDateFormat(Object objValue) {
		displayFormatter = new SimpleDateFormat((String) objValue, java.util.Locale.getDefault());
	}
	

	public void initDatePicker() {
		displayFormatter = new SimpleDateFormat(DISPLAY_FORMAT, java.util.Locale.getDefault());
		IWidget pickerTemplate = (IWidget) com.ashera.converter.ConverterFactory.get("template").convertFrom("@layout/datepicker", null, fragment);
		datePickerWidget = (BaseHasWidgets) pickerTemplate.loadLazyWidgets(this);
		editText = datePickerWidget.findWidgetById("@+id/editText");
		
		IWidget clearButton = findWidgetById("@+id/clearButton");
		setOnClickListener(clearButton, new View.OnClickListener() {
			@Override
			public void onClick(View v) {
				setDate(-1, -1, -1);;
			}

		});
	}

	//end - datepicker
	protected void showDatePicker() {
		DatePickerDialog datePickerDialog;
		Calendar c = Calendar.getInstance();
		if (year != 0 || month != 0 || day != 0) {
			c = new GregorianCalendar(year, month, day);
		}
		datePickerDialog = new DatePickerDialog(
				(Context) fragment.getRootActivity(),
				this,
				c.get(Calendar.YEAR),
				c.get(Calendar.MONTH),
				c.get(Calendar.DAY_OF_MONTH));
		if (android.os.Build.VERSION.SDK_INT >= Build.VERSION_CODES.HONEYCOMB) {
			if (this.maxDate != -1) {
				datePickerDialog.getDatePicker().setMaxDate(maxDate);
			}
			if (this.minDate != -1) {
				datePickerDialog.getDatePicker().setMinDate(minDate);
			}
		}

		datePickerDialog.show();
	}
	

	private void nativeCreate(Map<String, Object> params) {
		initDatePicker();
		IWidget imageButton = datePickerWidget.findWidgetById("@+id/imageButton");
		((View)imageButton.asWidget()).setOnClickListener(new View.OnClickListener() {
			@Override
			public void onClick(View v) {
				showDatePicker();
			}

		});
		registerForAttributeCommandChain("hint");
	}

	@Override
	public void onDateSet(DatePicker view, int year, int month, int dayOfMonth) {
		setDate(year, month, dayOfMonth);
	}

	
	//start - edittext
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
		return datePicker.getVisibility() == View.VISIBLE;
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
	//end - edittext
	private void setOnClickListener(IWidget clearButton, OnClickListener onClickListener) {
		((View)clearButton.asWidget()).setOnClickListener(onClickListener);
		
	}
	//start - androidseterror
	private void setError(String message) {
		if (editText.asNativeWidget() instanceof TextView) {
			((TextView) editText.asNativeWidget()).setError(message);
		}	
	}	
	//end - androidseterror

}
