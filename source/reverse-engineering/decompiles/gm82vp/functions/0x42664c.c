// rea decompile_all
// name: FUN_0042664c
// address: 0x42664c
// body: available
// range: 0x42664c-0x4266fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x426663 (push 0x4266fe followed by fs-segment stack chaining); handler 0x4266fe lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042664c(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_1c = &LAB_004266fe;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00428b68(&local_8,param_1);
  puVar7 = &local_c;
  uVar6 = 0;
  uVar5 = 0x400;
  uVar4 = local_8;
  iVar2 = (**(code **)PTR_DAT_00688f8c)();
  if (iVar2 == -0x7ffdfffb) {
    FUN_0040840c(&local_10,local_8);
    cVar1 = FUN_00416784(local_10,(int)&local_c + 3);
    if (cVar1 == '\0') {
      FUN_004246f8(0x80020005,*param_1,CONCAT22(extraout_var_00,0xb),uVar4,uVar5,uVar6,puVar7);
    }
  }
  else if (iVar2 == 0) {
    bVar3 = (short)local_c == 0;
    local_c = CONCAT13('\x01' - bVar3,(undefined3)local_c);
  }
  else {
    FUN_004246f8(iVar2,*param_1,CONCAT22(extraout_var,0xb),uVar4,uVar5,uVar6,puVar7);
  }
  *in_FS_OFFSET = uVar4;
  thunk_FUN_004072d8(&local_10,uVar4,uVar6,&LAB_00426705);
  FUN_00407dd0(&local_8);
  return;
}
