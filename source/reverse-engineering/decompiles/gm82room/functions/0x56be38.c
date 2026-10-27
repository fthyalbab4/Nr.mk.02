// rea decompile_all
// name: FUN_0056be38
// address: 0x56be38
// body: available
// range: 0x56be38-0x56c01c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56be66 (push 0x56c01d followed by fs-segment stack chaining); handler 0x56c01d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056be38(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  int local_18;
  int local_14;
  undefined4 local_c;
  undefined4 local_8;

  puStack_40 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_44 = &LAB_0056c01d;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  if (*(int *)PTR_DAT_00689570 != 0) {
    cVar1 = FUN_0056b4d0(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_0056b4d0(param_8);
      if (cVar1 != '\0') {
        local_14 = param_2;
        if (param_7 < 0) {
          local_14 = param_2 - param_7;
          param_5 = param_5 + param_7;
          param_7 = 0;
        }
        local_18 = param_3;
        if (param_6 < 0) {
          local_18 = param_3 - param_6;
          param_4 = param_4 + param_6;
          param_6 = 0;
        }
        if (*(int *)(DAT_0084527c + 4 + param_8 * 0x14) < param_5 + param_7) {
          param_5 = *(int *)(DAT_0084527c + 4 + param_8 * 0x14) - param_7;
        }
        if (*(int *)(DAT_0084527c + 8 + param_8 * 0x14) < param_4 + param_6) {
          param_4 = *(int *)(DAT_0084527c + 8 + param_8 * 0x14) - param_6;
        }
        if (local_14 < 0) {
          param_5 = param_5 + local_14;
          local_14 = 0;
        }
        if (local_18 < 0) {
          param_4 = param_4 + local_18;
          local_18 = 0;
        }
        if (*(int *)(DAT_0084527c + 4 + param_1 * 0x14) < local_14 + param_5) {
          param_5 = *(int *)(DAT_0084527c + 4 + param_1 * 0x14) - local_14;
        }
        if (*(int *)(DAT_0084527c + 8 + param_1 * 0x14) < local_18 + param_4) {
          param_4 = *(int *)(DAT_0084527c + 8 + param_1 * 0x14) - local_18;
        }
        if ((0 < param_5) && (0 < param_4)) {
          FUN_006212f8(*(undefined4 *)(DAT_0084527c + param_8 * 0x14),&local_8);
          FUN_006212f8(*(undefined4 *)(DAT_0084527c + param_1 * 0x14),&local_c);
          (**(code **)(**(int **)PTR_DAT_00689570 + 0x70))();
        }
      }
    }
  }
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_0056c024;
  puStack_44 = (undefined1 *)0x56c01c;
  FUN_00409120(&local_c,&LAB_00510f7c,2);
  return;
}
