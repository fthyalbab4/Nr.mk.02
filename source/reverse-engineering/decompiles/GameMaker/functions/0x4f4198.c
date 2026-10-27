// rea decompile_all
// name: FUN_004f4198
// address: 0x4f4198
// body: available
// range: 0x4f4198-0x4f42ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f4198(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_134;
  int local_130;
  undefined4 local_12c;
  int local_128;
  int local_124;
  BYTE local_120 [256];
  int local_20;
  int local_1c;
  uint local_18;
  undefined1 local_14;
  ushort local_13;
  undefined4 local_10;

  GetMessagePos();
  uVar2 = FUN_0040c144();
  local_12c._0_2_ = (short)uVar2;
  local_128 = (int)(short)local_12c;
  local_12c._2_2_ = (short)((uint)uVar2 >> 0x10);
  local_124 = (int)local_12c._2_2_;
  local_12c = uVar2;
  FUN_004ee1d0(param_1,&local_128,&local_134);
  if (param_3 == 0) {
    param_3 = FUN_004f4014(param_1,&local_134,0,0,0);
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_1 == param_3) {
    local_20 = local_134;
    local_1c = local_130;
  }
  else {
    local_20 = local_134 - *(int *)(param_3 + 0x40);
    local_1c = local_130 - *(int *)(param_3 + 0x44);
  }
  local_18 = (uint)*(ushort *)(param_2 + 8);
  local_10 = *(undefined4 *)(param_2 + 4);
  uVar3 = (uint)*(ushort *)(param_2 + 10);
  if (uVar3 < 0x201) {
    if (uVar3 - 0xa1 < 2) {
LAB_004f4279:
      local_14 = 0;
      goto LAB_004f429f;
    }
    if (uVar3 - 0xa4 < 2) {
LAB_004f428d:
      local_14 = 1;
      goto LAB_004f429f;
    }
    uVar3 = uVar3 - 0xa7;
  }
  else {
    if (uVar3 - 0x201 < 2) goto LAB_004f4279;
    if (uVar3 - 0x204 < 2) goto LAB_004f428d;
    uVar3 = uVar3 - 0x207;
  }
  if (uVar3 < 2) {
    local_14 = 2;
  }
  else {
    local_14 = 0;
  }
LAB_004f429f:
  GetKeyboardState(local_120);
  uVar1 = FUN_0051365c(local_120);
  local_13 = FUN_004eaa08();
  local_13 = uVar1 | local_13;
  uVar2 = FUN_004efb90(param_3,0xb04b,0,&local_20);
  *(undefined4 *)(param_2 + 0xc) = uVar2;
  return 1;
}
