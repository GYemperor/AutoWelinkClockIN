svc power stayon usb
adb shell am force-stop com.huawei.welink
timeout /t 3
//welink MainActivity name
//adb shell to start welink
adb shell am start -n com.huawei.welink/huawei.w3.ui.welcome.W3SplashScreenActivity
timeout /t 9
//welink  search icon x:0-870 y:210-350
//make touch the search
adb shell input tap 435 280
timeout /t 3
//make keyboard and input health
adb shell input text health
timeout /t 3
//welink HealthCradPunching x:0-1070 y:370-650
//then choose the default
adb shell input tap 535 510
timeout /t 9
//then make the cursor down
adb shell input touchscreen swipe 930 2000 930 0 
timeout /t 3
adb shell input touchscreen swipe 930 2000 930 0 
timeout /t 3
//then touch the submit x:60-1000 y:1760-1910
adb shell input tap 530 1835
adb shell input touchscreen swipe 930 2000 930 0 
timeout /t 3
adb shell input touchscreen swipe 930 2000 930 0 
timeout /t 3
adb shell am force-stop com.huawei.welink
exit