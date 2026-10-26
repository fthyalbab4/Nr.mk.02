// rea decompile_all
// name: FUN_004c2e48
// address: 0x4c2e48
// body: available
// range: 0x4c2e48-0x4c3071 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004c2e48(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_c;

  local_c = 1;
  local_10 = *(int *)(*(int *)(param_4 + -4) + 0x2cc);
  iVar7 = 0;
  do {
    if (*(int *)(*(int *)(*(int *)(param_4 + -4) + 0x288) + 8) <= iVar7) {
      return local_c;
    }
    iVar3 = FUN_0043b048(*(undefined4 *)(*(int *)(param_4 + -4) + 0x288),iVar7);
    cVar2 = FUN_00405c98(iVar3,&PTR_LAB_004a4a78);
    if (cVar2 != '\0') {
      FUN_0043c468(*(undefined4 *)(param_4 + -8),iVar7,0);
    }
    if (((*(byte *)(*(int *)(param_4 + -4) + 0x1c) & 0x10) != 0) ||
       (*(char *)(iVar3 + 0x59) != '\0')) {
      if (param_1 < local_10 + *(int *)(iVar3 + 0x48)) {
        cVar2 = FUN_00405c98(iVar3,&PTR_LAB_004a4a78);
        if ((cVar2 == '\0') || (1 < (byte)(*(char *)(iVar3 + 0x1c6) - 3U))) {
          bVar1 = false;
          iVar6 = iVar7;
          if (-1 < iVar7) {
            do {
              uVar4 = FUN_0043b048(*(undefined4 *)(*(int *)(param_4 + -4) + 0x288),iVar6);
              cVar2 = FUN_00405c98(uVar4,&PTR_LAB_004a4a78);
              if (cVar2 != '\0') {
                iVar5 = FUN_0043b048(*(undefined4 *)(*(int *)(param_4 + -4) + 0x288),iVar6);
                if ((((*(byte *)(iVar5 + 0x1c) & 0x10) != 0) || (*(char *)(iVar5 + 0x59) != '\0'))
                   && ((byte)(*(char *)(iVar5 + 0x1c6) - 3U) < 2)) {
                  cVar2 = FUN_0043c494(*(undefined4 *)(param_4 + -8),iVar6);
                  if (cVar2 == '\0') {
                    bVar1 = true;
                    local_10 = *(int *)(*(int *)(param_4 + -4) + 0x2cc);
                    FUN_0043c468(*(undefined4 *)(param_4 + -8),iVar6,1);
                    local_c = local_c + 1;
                    iVar7 = iVar6;
                  }
                  break;
                }
              }
              iVar6 = iVar6 + -1;
            } while (iVar6 != -1);
          }
          if (!bVar1) {
            iVar6 = iVar7 + -1;
            if (-1 < iVar6) {
              do {
                uVar4 = FUN_0043b048(*(undefined4 *)(*(int *)(param_4 + -4) + 0x288),iVar6);
                cVar2 = FUN_00405c98(uVar4,&PTR_LAB_004a4a78);
                if (cVar2 != '\0') {
                  iVar5 = FUN_0043b048(*(undefined4 *)(*(int *)(param_4 + -4) + 0x288),iVar6);
                  if (((*(byte *)(iVar5 + 0x1c) & 0x10) != 0) || (*(char *)(iVar5 + 0x59) != '\0'))
                  {
                    cVar2 = FUN_0043c494(*(undefined4 *)(param_4 + -8),iVar6);
                    if (cVar2 == '\0') {
                      bVar1 = true;
                      local_10 = *(int *)(*(int *)(param_4 + -4) + 0x2cc);
                      FUN_0043c468(*(undefined4 *)(param_4 + -8),iVar6,1);
                      local_c = local_c + 1;
                      iVar7 = iVar6;
                    }
                    break;
                  }
                }
                iVar6 = iVar6 + -1;
              } while (iVar6 != -1);
            }
            if (!bVar1) {
              local_10 = local_10 + *(int *)(iVar3 + 0x48);
            }
          }
          goto LAB_004c3052;
        }
      }
      local_10 = local_10 + *(int *)(iVar3 + 0x48);
    }
LAB_004c3052:
    iVar7 = iVar7 + 1;
  } while( true );
}
