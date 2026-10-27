// rea decompile_all
// name: FUN_00492c10
// address: 0x492c10
// body: available
// range: 0x492c10-0x492e5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00492c10(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_34 [2];
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  char local_15;
  int *local_14;
  int *local_c;

  *param_1 = 0;
  *param_2 = 0;
  local_1c = *(int *)(*(int *)(param_4 + -4) + 0x2cc);
  local_20 = 0;
  iVar5 = *(int *)(*(int *)(*(int *)(param_4 + -4) + 0x288) + 8);
  local_14 = param_2;
  if (-1 < iVar5 + -1) {
    iVar4 = 0;
    local_c = param_1;
    do {
      iVar2 = FUN_00438ec4(*(undefined4 *)(*(int *)(param_4 + -4) + 0x288),iVar4);
      local_24 = *(int *)(iVar2 + 0x48);
      if (((*(byte *)(*(int *)(param_4 + -4) + 0x1c) & 0x10) != 0) ||
         (*(char *)(iVar2 + 0x59) != '\0')) {
        cVar1 = FUN_004061f8(iVar2,&PTR_LAB_00488b04);
        if ((cVar1 == '\0') ||
           (*(int *)(*(int *)(*(int *)(param_4 + -4) + 0x288) + 8) + -1 <= iVar4)) {
          local_15 = '\0';
        }
        else if (*(int *)(param_4 + -8) == 0) {
          local_15 = *(char *)(iVar2 + 0x1c5);
        }
        else {
          local_15 = FUN_00439b4c(*(undefined4 *)(param_4 + -8),iVar4);
        }
        cVar1 = FUN_004061f8(iVar2,&PTR_LAB_00488b04);
        iVar3 = local_24;
        if ((cVar1 == '\0') || (1 < (byte)(*(char *)(iVar2 + 0x1c6) - 3U))) {
          cVar1 = FUN_004061f8(iVar2,&PTR_LAB_00488b04);
          if ((cVar1 != '\0') && (*(char *)(iVar2 + 0x1c6) == '\x02')) {
            iVar2 = FUN_004bcb90(*(undefined4 *)(param_4 + -4),0x433,iVar4,local_34);
            if (iVar2 == 0) {
              local_24 = local_24 + 0xd;
            }
            else {
              local_24 = local_2c - local_34[0];
            }
          }
          if (*local_c < local_1c + local_24) {
            *local_c = local_1c + local_24;
          }
          iVar2 = *(int *)(*(int *)(param_4 + -4) + 0x284) + local_20;
          if (*local_14 < iVar2) {
            *local_14 = iVar2;
          }
        }
        else {
          iVar2 = FUN_0048b734(*(char *)(iVar2 + 0x1c6) + -5);
          if (iVar2 < 0x40047) {
LAB_00492d2d:
            iVar3 = (iVar3 * 2) / 3;
          }
          else if (*(char *)(*(int *)(param_4 + -4) + 0x2aa) == '\0') {
            iVar2 = FUN_0048b734();
            if (0x40047 < iVar2) goto LAB_00492d2d;
          }
          if ((local_15 == '\0') ||
             (*(int *)(*(int *)(*(int *)(param_4 + -4) + 0x288) + 8) + -1 <= iVar4)) {
            if (*local_c < local_1c + local_24) {
              *local_c = local_1c + local_24;
            }
          }
          else {
            iVar2 = *(int *)(*(int *)(param_4 + -4) + 0x284) + local_20 + iVar3;
            if (*local_14 < iVar2) {
              *local_14 = iVar2;
            }
          }
          if (local_15 != '\0') {
            local_20 = local_20 + iVar3;
          }
        }
        if (local_15 == '\0') {
          local_1c = local_1c + local_24;
        }
        else {
          local_1c = *(int *)(*(int *)(param_4 + -4) + 0x2cc);
          local_20 = local_20 + *(int *)(*(int *)(param_4 + -4) + 0x284);
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((0 < *local_14) && (*(char *)(*(int *)(param_4 + -4) + 0x2aa) == '\0')) {
    *local_14 = *local_14 + 2;
  }
  return;
}
