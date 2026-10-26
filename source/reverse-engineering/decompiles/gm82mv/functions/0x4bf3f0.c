// rea decompile_all
// name: FUN_004bf3f0
// address: 0x4bf3f0
// body: available
// range: 0x4bf3f0-0x4bf435 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bf3f0(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_1c [8];
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;

  local_14 = *param_3;
  uStack_10 = param_3[1];
  uStack_c = param_3[2];
  uStack_8 = param_3[3];
  puVar3 = &local_14;
  uVar2 = *(undefined4 *)(param_4 + -8);
  uVar1 = 0;
  FUN_004bf258(*(undefined4 *)(param_1 + 0x34),local_1c,param_3,0,uVar2,puVar3,param_2);
  FUN_004bee30(*(undefined4 *)(param_4 + -4),param_1,local_1c,uVar1,uVar2,puVar3,param_2);
  return;
}
