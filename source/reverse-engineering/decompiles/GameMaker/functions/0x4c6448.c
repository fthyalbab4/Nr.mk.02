// rea decompile_all
// name: FUN_004c6448
// address: 0x4c6448
// body: available
// range: 0x4c6448-0x4c652a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c6448(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;

  puVar5 = &local_34;
  FUN_00404f08(&local_34,0x24,0);
  local_28 = 0;
  uVar4 = 1;
  local_30 = param_2;
  FUN_0043d064(param_1);
  uVar1 = FUN_004f76a8();
  iVar2 = FUN_0040efd0(uVar1,0x40d,0,uVar4,puVar5);
  puVar5 = &local_34;
  puVar6 = &local_34;
  iVar3 = FUN_004c638c(param_1,param_2);
  local_34 = 0x37;
  local_2c = FUN_00407f44(*(undefined4 *)(iVar3 + 0x10));
  local_30 = FUN_0043c914(iVar3);
  local_28 = 0;
  if (*(int *)(iVar3 + 0x10) != 0) {
    local_28 = *(undefined4 *)(*(int *)(iVar3 + 0x10) + -4);
  }
  local_24 = *(undefined4 *)(iVar3 + 0x18);
  local_20 = *(undefined4 *)(iVar3 + 0x1c);
  local_1c = *(undefined4 *)(iVar3 + 0x20);
  local_18 = *(undefined4 *)(iVar3 + 0x24);
  local_14 = *(undefined4 *)(iVar3 + 0x14);
  if (iVar2 == 0) {
    FUN_0043d064(param_1);
    uVar1 = FUN_004f76a8();
    FUN_0040efb8(uVar1,0x40b,param_2,puVar5);
  }
  else {
    FUN_0043d064(param_1);
    uVar1 = FUN_004f76a8();
    FUN_0040efb8(uVar1,0x40c,param_2,puVar6);
  }
  return;
}
