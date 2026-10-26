// rea decompile_all
// name: FUN_00503d18
// address: 0x503d18
// body: available
// range: 0x503d18-0x503e36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x503d30 (push 0x503e37 followed by fs-segment stack chaining); handler 0x503e37 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00503d18(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_20 = &LAB_00503e37;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  (**(code **)(*param_1 + 0xf8))();
  (**(code **)(*(int *)param_1[0xc6] + 0x44))();
  FUN_004081e8(&local_8,param_1[0xc4]);
  iVar2 = FUN_0041d99c(&DAT_00503e50,local_8);
  while (iVar2 != 0) {
    FUN_00408984(local_8,1,iVar2 + -1,&local_c);
    FUN_00408a54(&local_8,1,iVar2);
    iVar2 = FUN_0041d99c(&DAT_00503e50,local_8);
    if (iVar2 < 1) {
      FUN_004081e8(&local_10,local_8);
      puVar3 = (undefined4 *)0x503ddd;
      FUN_004081e8(&local_8,0);
    }
    else {
      puVar3 = &local_10;
      FUN_00408984(local_8,1,iVar2 + -1,puVar3);
      FUN_00408a54(&local_8,1,iVar2);
    }
    iVar2 = *(int *)param_1[0xab];
    (**(code **)(iVar2 + 0x38))((int *)param_1[0xab],local_c,iVar2,puVar3);
    (**(code **)(*(int *)param_1[0xc6] + 0x38))((int *)param_1[0xc6],local_10);
    iVar2 = FUN_0041d99c(&DAT_00503e50,local_8);
  }
  (**(code **)(*param_1 + 0xf0))(param_1,0);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00503e3e;
  puStack_20 = (undefined1 *)0x503e36;
  thunk_FUN_004072fc(&local_10,3,puVar1);
  return;
}
