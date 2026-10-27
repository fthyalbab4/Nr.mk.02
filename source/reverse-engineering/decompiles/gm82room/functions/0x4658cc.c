// rea decompile_all
// name: FUN_004658cc
// address: 0x4658cc
// body: available
// range: 0x4658cc-0x4659fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4658eb (push 0x4659fe followed by fs-segment stack chaining); handler 0x4659fe lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004658cc(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 local_1c [16];
  undefined4 local_c;
  int *local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = 0;
  puStack_2c = &LAB_004659fe;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_00405fdc(uVar5);
  FUN_0043d4f4(*(undefined4 *)(param_1 + 0x34));
  (**(code **)*param_2)();
  FUN_0043c834(param_2);
  FUN_0043caf8(*(undefined4 *)(param_1 + 0x34),param_2);
  FUN_0043c854(*(undefined4 *)(param_1 + 0x34));
  FUN_00447108(&PTR_FUN_00431f94,1,*(undefined4 *)(param_1 + 0x34),0);
  FUN_0040b268(&local_8);
  (**(code **)(*DAT_0068f100 + 0x10))();
  FUN_00465870();
  (**(code **)(*local_8 + 0x14))();
  FUN_00465870();
  FUN_00465c78(param_1,local_1c);
  FUN_0040b268(&local_c);
  (**(code **)(*local_8 + 0x34))();
  FUN_00465870();
  uVar2 = FUN_0040b268(param_1 + 0x38);
  uVar6 = 2;
  piVar4 = DAT_0068f100;
  uVar5 = local_c;
  (**(code **)(*DAT_0068f100 + 0x48))();
  FUN_00465870();
  iVar3 = param_1 + 0x2c;
  piVar1 = *(int **)(param_1 + 0x38);
  (**(code **)(*piVar1 + 0xc))();
  FUN_00465870();
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *in_FS_OFFSET = piVar1;
  FUN_0040b268(&local_c,piVar1,iVar3,&LAB_00465a05,piVar4,uVar5,uVar6,uVar2);
  FUN_0040b268(&local_8);
  return;
}
