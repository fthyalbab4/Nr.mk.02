// rea decompile_all
// name: FUN_004a9dd0
// address: 0x4a9dd0
// body: available
// range: 0x4a9dd0-0x4a9ea4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a9dee (push 0x4a9ea5 followed by fs-segment stack chaining); handler 0x4a9ea5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a9dd0(int *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  int local_10;
  int local_c;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_004a9ea5;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = param_2;
  iVar3 = (**(code **)(*(int *)param_1[0xa4] + 0x14))();
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    local_10 = iVar3;
    do {
      (**(code **)(*(int *)param_1[0xa4] + 0xc))((int *)param_1[0xa4],iVar4,&local_14);
      cVar2 = FUN_005136cc(*(undefined2 *)(local_c + 4),local_14);
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(*param_1 + 0xec))(param_1,iVar4);
        if (cVar2 != '\0') {
          cVar2 = FUN_00405d08(param_1);
          if (cVar2 != '\0') {
            *(undefined4 *)(local_c + 0xc) = 1;
            cVar2 = FUN_00405d08(param_1);
            if (cVar2 != '\0') {
              (**(code **)(*param_1 + 0xf8))(param_1,iVar4);
              FUN_00405d08(param_1);
            }
            goto LAB_004a9e8f;
          }
        }
      }
      iVar4 = iVar4 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  FUN_004f68e0(param_1,local_c);
LAB_004a9e8f:
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004a9eac;
  puStack_28 = (undefined1 *)0x4a9ea4;
  thunk_FUN_00406e5c(&local_14,uStack_2c,puVar1);
  return;
}
