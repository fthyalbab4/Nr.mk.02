// rea decompile_all
// name: FUN_005bd7d8
// address: 0x5bd7d8
// body: available
// range: 0x5bd7d8-0x5bda3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bd7d8(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_28;
  int local_24;
  int local_18;
  int local_14;

  local_18 = *(int *)PTR_DAT_0068959c;
  if (-1 < local_18 + -1) {
    local_24 = 0;
    do {
      iVar1 = *(int *)(*(int *)PTR_DAT_00688b6c + local_24 * 8);
      iVar2 = *(int *)(*(int *)PTR_DAT_00688b6c + 4 + local_24 * 8);
      local_14 = FUN_0060aa04(*(undefined4 *)PTR_DAT_0068939c,iVar1);
      if (-1 < local_14 + -1) {
        local_28 = 0;
        do {
          iVar4 = FUN_0060aa2c(*(undefined4 *)PTR_DAT_0068939c,iVar1,local_28);
          if (*(char *)(iVar4 + 0x108) == '\0') {
            iVar5 = FUN_0060aa04(*(undefined4 *)PTR_DAT_0068939c,iVar2);
            if (-1 < iVar5 + -1) {
              iVar7 = 0;
              do {
                if ((iVar1 != iVar2) || (local_28 <= iVar7)) {
                  iVar6 = FUN_0060aa2c(*(undefined4 *)PTR_DAT_0068939c,iVar2,iVar7);
                  cVar3 = FUN_0060f020(iVar4,iVar6,1);
                  if (cVar3 != '\0') {
                    if ((*(char *)(iVar4 + 0xc9) != '\0') || (*(char *)(iVar6 + 0xc9) != '\0')) {
                      FUN_0060ddec(iVar4);
                      FUN_0060d200(iVar4);
                      FUN_0060ddec(iVar6);
                      FUN_0060d200(iVar6);
                    }
                    FUN_0058a738(iVar4,iVar6,4);
                    FUN_0058a738(iVar6,iVar4,4);
                    if ((*(char *)(iVar4 + 0xc9) != '\0') || (*(char *)(iVar6 + 0xc9) != '\0')) {
                      FUN_0060e144(iVar4);
                      FUN_0060e144(iVar6);
                      FUN_0060ddec(iVar4);
                      FUN_0060ddec(iVar6);
                      cVar3 = FUN_0060f020(iVar4,iVar6,1);
                      if (cVar3 != '\0') {
                        FUN_0060ddec(iVar4);
                        FUN_0060d200(iVar4);
                        FUN_0060ddec(iVar6);
                        FUN_0060d200(iVar6);
                      }
                    }
                  }
                }
                iVar7 = iVar7 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
          }
          local_28 = local_28 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      local_24 = local_24 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}
