cmd_drivers/net/wireless/broadcom/brcm80211/brcmfmac/brcmfmac.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/net/wireless/broadcom/brcm80211/brcmfmac/brcmfmac.ko drivers/net/wireless/broadcom/brcm80211/brcmfmac/brcmfmac.o drivers/net/wireless/broadcom/brcm80211/brcmfmac/brcmfmac.mod.o ;  true
