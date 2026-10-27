// rea decompile_all
// name: FUN_004274c0
// address: 0x4274c0
// body: available
// range: 0x4274c0-0x42759b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4274df (push 0x42759c followed by fs-segment stack chaining); handler 0x42759c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004274c0(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_24 = 0;
  local_20 = 0;
  local_8 = 0;
  puStack_30 = &LAB_0042759c;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  FUN_00428cf0(&local_8,param_1);
  puVar6 = &local_14;
  uVar5 = 0;
  uVar4 = 0x400;
  uVar3 = local_8;
  iVar2 = (**(code **)PTR_DAT_00781a64)();
  if (iVar2 == -0x7ffdfffb) {
    FUN_00408130(&local_20,local_8);
    cVar1 = FUN_0041b1a0(local_20,&local_14);
    if (cVar1 == '\0') {
      FUN_00408130(&local_24,local_8);
      cVar1 = FUN_00419438(local_24,&local_1c);
      if (cVar1 == '\0') {
        FUN_00424618(0x80020005,*param_1,CONCAT22(extraout_var_00,7));
      }
      else {
        local_14 = local_1c;
        local_10 = local_18;
      }
    }
  }
  else if (iVar2 != 0) {
    FUN_00424618(iVar2,*param_1,CONCAT22(extraout_var,7),uVar3,uVar4,uVar5,puVar6);
  }
  *in_FS_OFFSET = uVar3;
  thunk_FUN_00406e80(&local_24,2,uVar5,&LAB_004275a3);
  FUN_00407a78(&local_8);
  return;
}
