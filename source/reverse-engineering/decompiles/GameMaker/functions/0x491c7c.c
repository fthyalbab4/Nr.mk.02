// rea decompile_all
// name: FUN_00491c7c
// address: 0x491c7c
// body: available
// range: 0x491c7c-0x491d4c inclusive
// range: 0x491d54-0x491d7f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x491d18 (push 0x491d4d followed by fs-segment stack chaining); handler 0x491d4d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00491c7c(int *param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_14;
  int local_10;
  char local_9;
  int *local_8;

  if ((param_2 == '\0') || ((*(byte *)(param_1 + 7) & 1) == 0)) {
    if ((char)param_1[0x28] != param_2) {
      *(char *)(param_1 + 0x28) = param_2;
      local_9 = param_2;
      local_8 = param_1;
      if (-1 < *(int *)(param_1[0x14] + 8) + -1) {
        local_10 = 0;
        local_14 = *(int *)(param_1[0x14] + 8);
        do {
          puStack_18 = (undefined1 *)0x491cf4;
          uVar2 = FUN_0043b048(local_8[0x14],local_10);
          puStack_18 = (undefined1 *)0x491cff;
          cVar1 = FUN_00405c98(uVar2,&PTR_FUN_00491654);
          if (cVar1 != '\0') {
            *(undefined1 *)(local_8 + 0x2c) = 1;
            puStack_1c = &LAB_00491d4d;
            uStack_20 = *in_FS_OFFSET;
            *in_FS_OFFSET = &uStack_20;
            puStack_18 = &stack0xfffffffc;
            piVar3 = (int *)FUN_0043b048(local_8[0x14],local_10);
            (**(code **)(*piVar3 + 0x98))(piVar3,local_9);
            *in_FS_OFFSET = uStack_20;
            *(undefined1 *)(local_8 + 0x2c) = 0;
            return;
          }
          local_10 = local_10 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      puStack_18 = (undefined1 *)0x491d64;
      (**(code **)(*local_8 + 0x34))();
      if (local_8[0x32] != -1) {
        puStack_18 = (undefined1 *)0x491d7c;
        FUN_00491dec(local_8,local_8[0x32]);
      }
    }
  }
  else {
    *(char *)((int)param_1 + 0xa1) = param_2;
  }
  return;
}
