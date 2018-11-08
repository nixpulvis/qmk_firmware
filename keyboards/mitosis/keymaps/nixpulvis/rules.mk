AUDIO_ENABLE     = no     # Audio output on port C6
BACKLIGHT_ENABLE = no     # Enable keyboard backlight functionality
BLUETOOTH_ENABLE = no     # Enable Bluetooth with the Adafruit EZ-Key HID
BOOTMAGIC_ENABLE = no     # Virtual DIP switch configuration(+1000)
COMMAND_ENABLE   = no     # Commands for debug and configuration
CONSOLE_ENABLE   = no     # Console for debug(+400)
EXTRAKEY_ENABLE  = no     # Audio control and System control(+450)
MIDI_ENABLE      = no     # MIDI controls
MOUSEKEY_ENABLE  = no     # Mouse keys(+4700)
NKRO_ENABLE      = no     # Nkey Rollover - if this doesn't work, see [1].
RGBLIGHT_ENABLE  = no     # Enable WS2812 RGB underlight.
UNICODE_ENABLE   = no     # Unicode
API_SYSEX_ENABLE = no

ifndef QUANTUM_DIR
	include ../../../../Makefile
endif

# [1]: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
