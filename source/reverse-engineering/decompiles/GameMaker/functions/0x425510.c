// rea decompile_all
// name: FUN_00425510
// address: 0x425510
// body: available
// range: 0x425510-0x4255b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x425527 (push 0x4255b3 followed by fs-segment stack chaining); handler 0x4255b3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00425510(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_1c = &LAB_004255b3;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00428cf0(&local_8,param_1);
  puVar6 = &local_c;
  uVar5 = 0;
  uVar4 = 0x400;
  uVar3 = local_8;
  iVar2 = (**(code **)PTR_DAT_0078285c)();
  if (iVar2 == -0x7ffdfffb) {
    FUN_00408130(&local_10,local_8);
    cVar1 = FUN_00416954(local_10,&local_c);
    if (cVar1 == '\0') {
      local_c = FUN_00426988(param_1);
      local_c = local_c & 0x7f;
    }
  }
  else if (iVar2 != 0) {
    FUN_00424618(iVar2,*param_1,CONCAT22(extraout_var,3),uVar3,uVar4,uVar5,puVar6);
  }
  *in_FS_OFFSET = uVar3;
  thunk_FUN_00406e5c(&local_10,uVar3,uVar5,&LAB_004255ba);
  FUN_00407a78(&local_8);
  return;
}
