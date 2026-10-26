// rea decompile_all
// name: FUN_006290b0
// address: 0x6290b0
// body: available
// range: 0x6290b0-0x6291d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6290e6 (push 0x6291d1 followed by fs-segment stack chaining); handler 0x6291d1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006290b0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  int local_44;
  char local_3d;
  undefined4 local_3c;
  undefined4 *local_34;
  undefined4 local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c [2];

  puVar5 = &local_2c;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  puStack_54 = (undefined1 *)0x6290db;
  local_3c = param_3;
  local_34 = param_2;
  FUN_0040923c(&local_2c,&DAT_00628dc0);
  puStack_58 = &LAB_006291d1;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_54 = &stack0xfffffffc;
  piVar2 = (int *)FUN_00405fac(&LAB_004319cc,1);
  FUN_0043c854(piVar2);
  (**(code **)(*piVar2 + 0x10))(piVar2,local_28,1);
  (**(code **)(*piVar2 + 0x10))(piVar2,local_24,4);
  local_3d = local_1c == 1;
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_3d,1);
  if (local_3d == '\0') {
    (**(code **)(*piVar2 + 0x10))(piVar2,local_14,8);
  }
  else {
    local_44 = 0;
    if (local_c[0] != 0) {
      local_44 = *(int *)(local_c[0] + -4);
    }
    if (32000 < local_44) {
      local_44 = 32000;
    }
    (**(code **)(*piVar2 + 0x10))(piVar2,&local_44,4);
    FUN_0043cac0(piVar2,local_c,local_44);
  }
  FUN_0043c854(piVar2);
  uVar3 = (**(code **)*piVar2)();
  *local_34 = uVar3;
  (**(code **)(*piVar2 + 0xc))(piVar2,local_3c,*local_34);
  FUN_00405fdc(piVar2);
  puVar1 = puStack_54;
  *in_FS_OFFSET = uStack_5c;
  puStack_54 = &LAB_006291d8;
  puStack_58 = (undefined1 *)0x6291d0;
  FUN_004090d0(&local_2c,&DAT_00628dc0,puVar1);
  return;
}
