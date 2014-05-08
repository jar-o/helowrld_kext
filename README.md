# KEXT for Mavericks without code signing

This is a very basic Kernel Extension (KEXT) that does nothing except `printf()`
a couple log entries to the *Console*.

Although it may seem otherwise, you don't need to code sign your KEXT in order to
get it to run on Mavericks. You simply need to do the following:

1. Turn off code signing in your project. Go to *Settings* and under the *Code Signing*
section, set *Code Signing Identity* to  *Don't Code Sign*.
2. Build.
3. The `.kext` has to be in the `/System/Library/Extensions/` folder for this to work.
Do

    `sudo cp -R path/to/helowrld_kext.kext /System/Library/Extensions/`

4. Then, load:

    `sudo kextload /System/Library/Extensions/helowrld_kext.kext`

5. You should see the message "helowrld" from *kernel* if you check *Console*.
6. To end it:

    `sudo kextunload /System/Library/Extensions/helowrld_kext.kext`

7. You should see "helowrld:stop" in *Console*

That's it. You can take it from here.


