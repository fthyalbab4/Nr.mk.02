// rea decompile_all
// name: FUN_006cd8ac
// address: 0x6cd8ac
// body: available
// range: 0x6cd8ac-0x6cda4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006cd8ac(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;

  uVar2 = 0;
  FUN_0052f12c(param_1,*(undefined4 *)PTR_DAT_00781e7c);
  FUN_0043f4c0(param_1,PTR_DAT_007826ac,0x10);
  FUN_006ca2ac(5);
  cVar1 = FUN_00712fd4(param_1,1);
  if (cVar1 != '\0') {
    FUN_006ca2ac(10);
    cVar1 = FUN_006bca8c(param_1,1);
    if (cVar1 != '\0') {
      cVar1 = FUN_00696744(param_1,1);
      if (cVar1 != '\0') {
        FUN_006ca2ac(0xc);
        cVar1 = FUN_00651fe4(param_1,1);
        if (cVar1 != '\0') {
          FUN_006ca2ac(0x14);
          cVar1 = FUN_006f55c4(param_1,1);
          if (cVar1 != '\0') {
            FUN_006ca2ac(0x32);
            cVar1 = FUN_0064dad4(param_1,1);
            if (cVar1 != '\0') {
              FUN_006ca2ac(0x3c);
              cVar1 = FUN_00722558(param_1,1);
              if (cVar1 != '\0') {
                FUN_006ca2ac(0x41);
                cVar1 = FUN_00655858(param_1,1);
                if (cVar1 != '\0') {
                  FUN_006ca2ac(0x46);
                  cVar1 = FUN_006fc974(param_1,1);
                  if (cVar1 != '\0') {
                    FUN_006ca2ac(0x4b);
                    cVar1 = FUN_006fa324(param_1,1);
                    if (cVar1 != '\0') {
                      FUN_006ca2ac(0x50);
                      cVar1 = FUN_0062c7ac(param_1,1);
                      if (cVar1 != '\0') {
                        FUN_006ca2ac(0x55);
                        cVar1 = FUN_00692c24(param_1,1);
                        if (cVar1 != '\0') {
                          FUN_006ca2ac(0x5f);
                          cVar1 = FUN_006cc648(param_1,1);
                          if (cVar1 != '\0') {
                            cVar1 = FUN_00533734(param_1,1);
                            if (cVar1 != '\0') {
                              FUN_006ca2ac(100);
                              cVar1 = FUN_00714f10(param_1,1);
                              if (cVar1 != '\0') {
                                cVar1 = FUN_0071de7c(param_1,1);
                                if (cVar1 != '\0') {
                                  uVar2 = 1;
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
        }
      }
    }
  }
  return uVar2;
}
