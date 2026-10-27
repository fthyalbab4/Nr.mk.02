// rea decompile_all
// name: FUN_005372ec
// address: 0x5372ec
// body: available
// range: 0x5372ec-0x5373cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5373c0 to 0x5371fc FUN_005371fc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005372ec(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_stack_00000000;
  int *in_stack_00000004;
  byte *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000018;
  undefined *puVar3;
  undefined4 uVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 local_34 [32];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  uint local_8;

  local_c = (uint)in_stack_00000008[1];
  for (uVar2 = local_c; uVar2 != 0; uVar2 = uVar2 - 1) {
  }
  local_14 = &stack0xffffffc0;
  local_8 = (uint)in_stack_00000008[2];
  for (uVar2 = local_8; uVar2 != 0; uVar2 = uVar2 - 1) {
  }
  uVar2 = (uint)*in_stack_00000008;
  if ((uVar2 == 4) &&
     ((local_8 = local_8 + 1, in_stack_00000008[3] == 9 || (in_stack_00000008[3] == 0xd)))) {
    uVar2 = 8;
  }
  local_10 = &stack0xffffffc0;
  uVar7 = 0;
  puVar6 = local_34;
  uVar4 = 0;
  FUN_005372dc();
  ppuVar5 = &local_14;
  puVar3 = &DAT_0067ca58;
  iVar1 = (**(code **)(*in_stack_00000004 + 0x18))();
  if (iVar1 != 0) {
    FUN_005371fc(iVar1,local_34,in_stack_00000000,in_stack_00000004,in_stack_0000000c,puVar3,uVar4,
                 uVar2,ppuVar5,in_stack_00000018,puVar6,uVar7);
    return;
  }
  return;
}
