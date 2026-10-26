// rea decompile_all
// name: FUN_00427964
// address: 0x427964
// body: available
// range: 0x427964-0x427a0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x427980 (push 0x427a10 followed by fs-segment stack chaining); handler 0x427a10 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00427964(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  undefined1 local_14 [12];
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  local_8 = 0;
  puStack_24 = &LAB_00427a10;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00428b68(&local_8,param_1);
  puVar6 = local_14;
  uVar5 = 0;
  uVar4 = 0x400;
  uVar3 = local_8;
  iVar2 = (**(code **)PTR_DAT_00689508)();
  if (iVar2 == -0x7ffdfffb) {
    FUN_0040840c(&local_18,local_8);
    cVar1 = FUN_004190b8(local_18,local_14);
    if (cVar1 == '\0') {
      FUN_004246f8(0x80020005,*param_1,CONCAT22(extraout_var_00,6),uVar3,uVar4,uVar5,puVar6);
    }
  }
  else if (iVar2 != 0) {
    FUN_004246f8(iVar2,*param_1,CONCAT22(extraout_var,6),uVar3,uVar4,uVar5,puVar6);
  }
  *in_FS_OFFSET = uVar3;
  thunk_FUN_004072d8(&local_18,uVar3,uVar5,&LAB_00427a17);
  FUN_00407dd0(&local_8);
  return;
}
