// rea decompile_all
// name: FUN_00626d4c
// address: 0x626d4c
// body: available
// range: 0x626d4c-0x6270d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00626d4c(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;

  uVar6 = 0;
  uVar2 = FUN_0050c5d4(param_1);
  iVar3 = FUN_0050bbe0(uVar2);
  if (0 < iVar3) {
    do {
      FUN_0050bbe0(uVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar4 = FUN_0050bbe0(uVar2);
  *PTR_DAT_00689498 = (uVar4 & 1) != 0;
  if (*PTR_DAT_00689498 == '\0') {
    FUN_00625b6c();
  }
  DAT_0085b444 = uVar4 >> 1 & 3;
  uVar5 = FUN_0050bbe0(uVar2);
  *(undefined4 *)PTR_DAT_00688e9c = uVar5;
  FUN_0043ca88(uVar2,PTR_DAT_00689464,0x10);
  FUN_006257f4(0,L"Loading extension packages");
  cVar1 = FUN_00585540(uVar2);
  if (cVar1 == '\0') {
    FUN_004a17e4(L"Error: Error in resource data.");
    return 0;
  }
  FUN_006257f4(5,L"Loading triggers");
  cVar1 = FUN_00582048(uVar2);
  if (cVar1 == '\0') {
    FUN_004a17e4(L"Error: Error in resource data.");
    return 0;
  }
  FUN_006257f4(6,L"Loading constants");
  cVar1 = FUN_00581e98(uVar2);
  if (cVar1 == '\0') {
    FUN_004a17e4(L"Error: Error in resource data.");
    return 0;
  }
  FUN_006257f4(7,L"Loading sounds");
  cVar1 = FUN_00513ce4(uVar2);
  if (cVar1 == '\0') {
    FUN_004a17e4(L"Error: Error in resource data.");
    return 0;
  }
  FUN_006257f4(10,L"Loading sprites");
  cVar1 = FUN_00579734(uVar2);
  if (cVar1 == '\0') {
    FUN_004a17e4(L"Error: Error in resource data.");
    return 0;
  }
  FUN_006257f4(0x17,L"Loading backgrounds");
  if ((*PTR_DAT_00689498 == '\0') && (DAT_0085b440 != 0 || DAT_0085b43c != 0)) {
    uVar4 = DAT_0085b448 - DAT_0085b43c;
    iVar3 = (DAT_0085b44c - DAT_0085b440) - (uint)(DAT_0085b448 < DAT_0085b43c);
    if (iVar3 < 0) {
      bVar7 = uVar4 != 0;
      uVar4 = -uVar4;
      iVar3 = -(iVar3 + (uint)bVar7);
    }
    if (iVar3 == 0) {
      if (0x2e8 < uVar4) {
LAB_00626f0e:
        FUN_004a17e4(L"LITE .exe has expired",uVar4);
        return 0;
      }
    }
    else if (0 < iVar3) goto LAB_00626f0e;
  }
  cVar1 = FUN_0056ff6c(uVar2);
  if (cVar1 == '\0') {
    FUN_004a17e4(L"Error: Error in resource data.");
  }
  else {
    FUN_006257f4(0x1e,L"Loading paths");
    cVar1 = FUN_0057bc98(uVar2);
    if (cVar1 == '\0') {
      FUN_004a17e4(L"Error: Error in resource data.");
    }
    else {
      FUN_006257f4(0x20,L"Loading scripts");
      cVar1 = FUN_0058879c(uVar2);
      if (cVar1 == '\0') {
        FUN_004a17e4(L"Error: Error in resource data.");
      }
      else {
        FUN_006257f4(0x22,L"Loading fonts");
        cVar1 = FUN_00580ba4(uVar2);
        if (cVar1 == '\0') {
          FUN_004a17e4(L"Error: Error in resource data.");
        }
        else {
          FUN_006257f4(0x24,L"Loading time lines");
          cVar1 = FUN_005819f0(uVar2);
          if (cVar1 == '\0') {
            FUN_004a17e4(L"Error: Error in resource data.");
          }
          else {
            FUN_006257f4(0x26,L"Loading objects");
            cVar1 = FUN_00571d04(uVar2);
            if (cVar1 == '\0') {
              FUN_004a17e4(L"Error: Error in resource data.");
            }
            else {
              FUN_006257f4(0x28,L"Loading rooms");
              cVar1 = FUN_005710d4(uVar2);
              if (cVar1 == '\0') {
                FUN_004a17e4(L"Error: Error in resource data.");
              }
              else {
                FUN_006257f4(0x2b,L"Loading included files");
                cVar1 = FUN_006267f4(uVar2);
                if (cVar1 == '\0') {
                  FUN_004a17e4(L"Error: Error in resource data.");
                }
                else {
                  FUN_006257f4(0x2d,L"Loading help");
                  cVar1 = FUN_0058ffe8(uVar2);
                  if (cVar1 == '\0') {
                    FUN_004a17e4(L"Error: Error in resource data.");
                  }
                  else {
                    FUN_006257f4(0x2f,L"Loading library init code");
                    cVar1 = FUN_00589ca0(uVar2);
                    if (cVar1 == '\0') {
                      FUN_004a17e4(L"Error: Error in resource data.");
                    }
                    else {
                      FUN_006257f4(0x31,L"Loading room order");
                      cVar1 = FUN_005715d0(uVar2);
                      if (cVar1 == '\0') {
                        FUN_004a17e4(L"Error: Error in resource data.");
                      }
                      else {
                        FUN_005f783f(uVar2);
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
  return uVar6;
}
