# on-block-notify

on-block-notify is a simple daemon script compatiable with Swap Micropool (https://github.com/swap-dev/micropool-gui) and Swap Reference Pool (https://github.com/swap-dev/cryptonote-swap-pool). It is designed to reduce delays in mining job creation whenever a new block is found on the Swap Network, and thereby increasing mining efficiency while reducing orphan rates.


#### To build for Linux/macOS:

	$ make notify

#### To build for Windows (msys2):

	$ make notify_win

To run, append the "--block-notify path_to_executable/notify" flag to swapd.
