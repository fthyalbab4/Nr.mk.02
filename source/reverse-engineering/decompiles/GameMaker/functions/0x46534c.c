// rea decompile_all
// name: FUN_0046534c
// address: 0x46534c
// body: available
// range: 0x46534c-0x4654ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x46536e (push 0x4654ee followed by fs-segment stack chaining); handler 0x4654ee lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046534c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined1 *local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  int *local_c;
  int *local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 4;
  do {
    local_8 = (int *)0x0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  puStack_24 = &LAB_004654ee;
  local_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  puVar2 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x4d) != '\0') {
    FUN_0043fef4(*(undefined4 *)(param_1 + 0x34));
    piVar3 = (int *)FUN_00449efc(&PTR_FUN_004340e8,1,*(undefined4 *)(param_1 + 0x34),0);
    if (piVar3 != (int *)0x0) {
      piVar3 = piVar3 + 2;
    }
    (**(code **)(*piVar3 + 4))();
    FUN_0040b140(&stack0xffffffec);
    (**(code **)(*DAT_00788100 + 0x38))();
    (**(code **)(*unaff_EBX + 0x38))();
    FUN_0040b140(&local_8);
    (**(code **)(*DAT_00788100 + 0x20))();
    (**(code **)(*local_8 + 0xc))();
    FUN_0040b140(&local_c);
    (**(code **)(*local_8 + 0x28))();
    (**(code **)(*local_c + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x38) + 0x10))();
    (**(code **)(*local_c + 0x18))();
    (**(code **)(*local_c + 0x10))();
    FUN_0040b140(&stack0xffffffe8);
    (**(code **)(*DAT_00788100 + 0x24))();
    (**(code **)(**(int **)(param_1 + 0x38) + 0x18))();
    (**(code **)(*local_c + 0x20))();
    (**(code **)(*local_c + 0x2c))();
    (**(code **)(*local_c + 0x30))();
    (**(code **)(*local_8 + 0x2c))();
    *(undefined1 *)(param_1 + 0x4d) = 0;
    puVar2 = puStack_20;
  }
  puStack_20 = puVar2;
  FUN_0043f254(*(undefined4 *)(param_1 + 0x34));
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  uVar4 = (**(code **)*puVar1)();
  FUN_0043f4f8(param_2,puVar1);
  puVar2 = local_28;
  *in_FS_OFFSET = uVar4;
  local_28 = &LAB_004654f5;
  FUN_0040b140(&stack0xffffffe8,uVar4,puVar2);
  FUN_0040b140(&stack0xffffffec);
  FUN_0040b140(&local_10);
  FUN_0040b140(&local_c);
  FUN_0040b140(&local_8);
  return;
}
