// rea decompile_all
// name: FUN_004f8a48
// address: 0x4f8a48
// body: available
// range: 0x4f8a48-0x4f8afe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f8a48(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short local_38;
  short sStack_36;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [8];

  if (*(int *)(param_2 + 0xc) == 0) {
    local_38 = (short)*(undefined4 *)(param_2 + 8);
    local_34 = (int)local_38;
    sStack_36 = (short)((uint)*(undefined4 *)(param_2 + 8) >> 0x10);
    local_30 = (int)sStack_36;
    uVar4 = 0;
    uVar3 = 0;
    FUN_004ee1d0(param_1,&local_34,local_18,0,0);
    iVar2 = FUN_004f4014(param_1,local_18,0,uVar3,uVar4);
    if (iVar2 != 0) {
      uVar1 = *(uint *)(param_2 + 8);
      local_2c._0_2_ = (short)uVar1;
      local_28 = (int)(short)local_2c;
      local_2c._2_2_ = (short)(uVar1 >> 0x10);
      local_24 = (int)local_2c._2_2_;
      local_2c = uVar1;
      local_20 = local_28;
      local_1c = local_24;
      uVar3 = FUN_004efb90(iVar2,0x7b,0,uVar1 & 0xffff | local_24 << 0x10);
      *(undefined4 *)(param_2 + 0xc) = uVar3;
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      FUN_004f14f0(param_1,param_2);
    }
  }
  return;
}
