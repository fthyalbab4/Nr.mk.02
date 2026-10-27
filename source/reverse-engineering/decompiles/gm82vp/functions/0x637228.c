// rea decompile_all
// name: FUN_00637228
// address: 0x637228
// body: available
// range: 0x637228-0x6373a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00637228(int param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;

  if (param_2 != 0) {
    iVar2 = (*(int *)(param_2 + 0xb8) - *(int *)(param_1 + 4)) / *(int *)(param_1 + 0xc);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    iVar3 = (*(int *)(param_2 + 0xc0) - *(int *)(param_1 + 4)) / *(int *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x14) <= iVar3) {
      iVar3 = *(int *)(param_1 + 0x14) + -1;
    }
    local_2c = (*(int *)(param_2 + 0xbc) - *(int *)(param_1 + 8)) / *(int *)(param_1 + 0x10);
    if (local_2c < 0) {
      local_2c = 0;
    }
    local_28 = (*(int *)(param_2 + 0xc4) - *(int *)(param_1 + 8)) / *(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x18) <= local_28) {
      local_28 = *(int *)(param_1 + 0x18) + -1;
    }
    if (iVar2 <= iVar3) {
      local_24 = (iVar3 - iVar2) + 1;
      do {
        if (local_2c <= local_28) {
          iVar4 = (local_28 - local_2c) + 1;
          iVar3 = local_2c;
          do {
            if (param_3 == '\0') {
              *(undefined4 *)
               (*(int *)(param_1 + 0x1c) + (iVar2 * *(int *)(param_1 + 0x18) + iVar3) * 4) =
                   0xffffffff;
            }
            else if (-1 < *(int *)(*(int *)(param_1 + 0x1c) +
                                  (iVar2 * *(int *)(param_1 + 0x18) + iVar3) * 4)) {
              cVar1 = FUN_0060e6a4(param_2,CONCAT31((int3)((ulonglong)
                                                           ((longlong)(iVar3 + 1) *
                                                           (longlong)*(int *)(param_1 + 0x10)) >>
                                                          0x28),1));
              if (cVar1 != '\0') {
                *(undefined4 *)
                 (*(int *)(param_1 + 0x1c) + (iVar2 * *(int *)(param_1 + 0x18) + iVar3) * 4) =
                     0xffffffff;
              }
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        iVar2 = iVar2 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
  }
  return;
}
