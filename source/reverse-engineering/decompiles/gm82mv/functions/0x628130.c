// rea decompile_all
// name: FUN_00628130
// address: 0x628130
// body: available
// range: 0x628130-0x6282bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00628130(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar3 = 0;
  FUN_00627b34();
  FUN_006257f4(0x32,L"Extracting included files");
  cVar1 = FUN_00626938();
  if (cVar1 == '\0') {
    FUN_004a17e4(&PTR_DAT_0062830c);
  }
  else {
    FUN_006257f4(0x37,&PTR_DAT_00628364);
    cVar1 = FUN_00585630();
    if (cVar1 == '\0') {
      FUN_004a17e4(&PTR_DAT_006283ac);
    }
    else {
      FUN_006257f4(0x3c,&PTR_DAT_00628404);
      cVar1 = FUN_005853cc();
      if (cVar1 == '\0') {
        FUN_004a17e4(&PTR_DAT_00628438);
      }
      else {
        FUN_006257f4(0x3d,&PTR_DAT_00628484);
        cVar1 = FUN_00582104();
        if (cVar1 == '\0') {
          FUN_004a17e4(&PTR_DAT_006284b8);
        }
        else {
          FUN_006257f4(0x3e,&PTR_DAT_006284fc);
          cVar1 = FUN_005888e0();
          if (cVar1 == '\0') {
            FUN_004a17e4(&PTR_DAT_0062852c);
          }
          else {
            FUN_006257f4(0x46,&PTR_DAT_00628578);
            cVar1 = FUN_00581c4c();
            if (cVar1 == '\0') {
              FUN_004a17e4(&PTR_DAT_006285bc);
            }
            else {
              FUN_006257f4(0x48,&PTR_DAT_0062862c);
              cVar1 = FUN_00571e60();
              if (cVar1 == '\0') {
                FUN_004a17e4(&PTR_DAT_0062866c);
              }
              else {
                FUN_006257f4(0x50,&PTR_DAT_006286d4);
                uVar2 = FUN_00513e60();
                FUN_0051162c(DAT_0085b438,uVar2);
                cVar1 = FUN_00513e28();
                if (cVar1 == '\0') {
                  FUN_004a17e4(&PTR_DAT_00628704);
                }
                else {
                  FUN_006257f4(0x5a,&PTR_DAT_0062874c);
                  cVar1 = FUN_00627be8();
                  if (cVar1 == '\0') {
                    FUN_005118c0();
                  }
                  else {
                    FUN_005f68a8(DAT_0085b438);
                    FUN_006257f4(100,L"Ready");
                    FUN_00625b24();
                    uVar3 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}
