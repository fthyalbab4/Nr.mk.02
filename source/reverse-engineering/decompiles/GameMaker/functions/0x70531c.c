// rea decompile_all
// name: FUN_0070531c
// address: 0x70531c
// body: available
// range: 0x70531c-0x7055af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0070531c(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  uVar6 = 0;
  iVar2 = FUN_0052f024(param_1);
  if (iVar2 == 0x12d591) {
    iVar2 = FUN_0052f024(param_1);
    if (iVar2 < 500) {
      FUN_004d43f8(L"Error Loading: Cannot load game file created before version 5.0.");
    }
    else if (iVar2 < 0x32b) {
      FUN_006ca2ac(5);
      if ((700 < iVar2) && (iVar2 < 800)) {
        iVar3 = FUN_0052f024(param_1);
        iVar4 = FUN_0052f024(param_1);
        if (-1 < iVar3 + -1) {
          do {
            FUN_0052f024(param_1);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        uVar5 = FUN_0052f024(param_1);
        if (-1 < iVar4 + -1) {
          do {
            FUN_0052f024(param_1);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        uVar7 = 0;
        iVar3 = FUN_0043f234(param_1);
        FUN_0052f634(param_1,uVar5,iVar3 + 1,uVar7);
      }
      if (iVar2 < 600) {
        FUN_0052f024(param_1);
      }
      DAT_007907f4 = FUN_0052f024(param_1);
      FUN_0043f488(param_1,&DAT_007907f8,0x10);
      cVar1 = FUN_00709434(param_1);
      if (cVar1 != '\0') {
        FUN_006ca2ac(10);
        if (799 < iVar2) {
          cVar1 = FUN_006bc9bc(param_1);
          if (cVar1 == '\0') {
            return 0;
          }
          cVar1 = FUN_00696640(param_1);
          if (cVar1 == '\0') {
            return 0;
          }
          FUN_006ca2ac(0xf);
        }
        cVar1 = FUN_00651e14(param_1);
        if (cVar1 != '\0') {
          FUN_006ca2ac(0x1e);
          cVar1 = FUN_006f53a0(param_1);
          if (cVar1 != '\0') {
            FUN_006ca2ac(0x37);
            cVar1 = FUN_0064d8bc(param_1);
            if (cVar1 != '\0') {
              FUN_006ca2ac(0x41);
              cVar1 = FUN_007221a0(param_1);
              if (cVar1 != '\0') {
                FUN_006ca2ac(0x46);
                cVar1 = FUN_00655688(param_1);
                if (cVar1 != '\0') {
                  FUN_006ca2ac(0x4b);
                  if (iVar2 < 0x21c) {
                    cVar1 = FUN_00705298(param_1);
                  }
                  else {
                    cVar1 = FUN_006fc7a4(param_1);
                  }
                  if (cVar1 != '\0') {
                    FUN_006ca2ac(0x50);
                    cVar1 = FUN_006fa154(param_1);
                    if (cVar1 != '\0') {
                      FUN_006ca2ac(0x55);
                      cVar1 = FUN_0062c5dc(param_1);
                      if (cVar1 != '\0') {
                        FUN_006ca2ac(0x5a);
                        cVar1 = FUN_00692a34(param_1);
                        if ((((cVar1 != '\0') &&
                             ((FUN_006ca2ac(0x5f), iVar2 < 0x26c ||
                              (cVar1 = FUN_006cc52c(param_1), cVar1 != '\0')))) &&
                            ((iVar2 < 0x26c || (cVar1 = FUN_00712e90(param_1), cVar1 != '\0')))) &&
                           (cVar1 = FUN_005335b8(param_1), cVar1 != '\0')) {
                          FUN_006ca2ac(100);
                          cVar1 = FUN_00714ea4(param_1);
                          if ((cVar1 != '\0') && (cVar1 = FUN_0071dc58(param_1), cVar1 != '\0')) {
                            uVar6 = 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      FUN_004d43f8(
                  L"Error Loading: File was created with a newer version of game maker. Please get the new version from the web site."
                  );
    }
  }
  else {
    FUN_004d43f8(L"Error Loading: This is not a game maker file.");
  }
  return uVar6;
}
