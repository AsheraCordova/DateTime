# DateTime

DateTime project which adds support for date and time.

## Widgets
* com.ashera.datetime.DatePicker	
* com.ashera.datetime.TimePicker	

Important Links:

https://asheracordova.github.io/

https://asheracordova.github.io/doc/help-doc.html

https://asheracordova.github.io/doc/com/ashera/datetime/DatePicker.html

https://asheracordova.github.io/doc/com/ashera/datetime/TimePicker.html

To install the plugin use:

```
cordova plugin add https://github.com/AsheraCordova/DateTime.git
```

## Custom Attributes

The following table lists the custom attributes used in widgets:
### com.ashera.datetime.DatePicker
Name                	| Description
-------------       	| -------------
hintTextFormat 		    | Helps to format hint text. It uses String.format function. e.g. Rs %s. When text is set, the text is formatted using the textFormat attribute before being set.
dateFormat            | Format for date. e.g. dd/MM/yyyy. See https://docs.oracle.com/javase/8/docs/api/java/text/SimpleDateFormat.html
maxDateToday          | If true, the picker will disable selection of future dates.
minDateToday          | If true, the picker will disable selection of past dates.
showClearButton       | Clear button will be visible if true else hidden.

### com.ashera.datetime.TimePicker
Name                	| Description
-------------       	| -------------
hintTextFormat 		    | Helps to format hint text. It uses String.format function. e.g. Rs %s. When text is set, the text is formatted using the textFormat attribute before being set.
timeFormat            | Format for time. e.g HH:MM. See https://docs.oracle.com/javase/8/docs/api/java/text/SimpleDateFormat.html
showClearButton       | Clear button will be visible if true else hidden.
