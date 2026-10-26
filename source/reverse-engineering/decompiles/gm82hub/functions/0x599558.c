// rea decompile_all
// name: FUN_00599558
// address: 0x599558
// body: available
// range: 0x599558-0x59966f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00599558(int *param_1,int param_2,char param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_8;

  local_8 = param_2;
  if ((param_3 == '\x03') && (cVar1 = FUN_00406268(*(undefined4 *)(param_4 + -4)), cVar1 != '\0')) {
    local_8 = FUN_004baf44(*(undefined4 *)(param_4 + -4));
    local_8 = local_8 - param_2;
  }
  iVar3 = param_1[1];
  iVar2 = *param_1;
  local_14 = 0;
  local_18 = iVar2;
  if (iVar2 < 7) {
    local_18 = 7;
    local_14 = 7U - iVar2 >> 1;
  }
  local_10 = param_1[7];
  if (local_10 <= param_1[8] + -1) {
    local_1c = ((param_1[8] + -1) - local_10) + 1;
    do {
      iVar2 = (*(code *)param_1[10])(param_1[0xb],local_10);
      iVar3 = iVar3 + iVar2;
      if (param_1[2] < iVar3) break;
      if (((int)(iVar3 - local_14) <= local_8) && (local_8 <= (int)((iVar3 - local_14) + local_18)))
      {
        **(char **)(param_4 + 0x18) = param_3;
        **(int **)(param_4 + 0x10) = iVar3;
        **(int **)(param_4 + 0xc) = iVar3 - local_8;
        **(int **)(param_4 + 0x14) = local_10;
        return;
      }
      iVar3 = iVar3 + *param_1;
      local_10 = local_10 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  iVar3 = param_1[3];
  if (((iVar3 == param_1[2]) && ((int)(iVar3 - local_14) <= local_8)) && (local_8 <= iVar3)) {
    **(char **)(param_4 + 0x18) = param_3;
    **(int **)(param_4 + 0x10) = param_1[3];
    **(int **)(param_4 + 0xc) = param_1[3] - local_8;
    **(int **)(param_4 + 0x14) = param_1[4] + 1;
  }
  return;
}
