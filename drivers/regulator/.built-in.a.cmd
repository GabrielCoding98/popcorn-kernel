cmd_drivers/regulator/built-in.a := rm -f drivers/regulator/built-in.a; arm-linux-gnueabihf-ar rcSTPD drivers/regulator/built-in.a drivers/regulator/core.o drivers/regulator/dummy.o drivers/regulator/fixed-helper.o drivers/regulator/helpers.o drivers/regulator/devres.o drivers/regulator/of_regulator.o