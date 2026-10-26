// rea decompile_all
// name: FUN_004c1b04
// address: 0x4c1b04
// body: available
// range: 0x4c1b04-0x4c1b5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c1b04(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_1c [8];
  undefined1 local_14;
  undefined4 local_10;

  iVar2 = FUN_004c5060(param_1,0x417,param_2,auStack_1c);
  if (iVar2 != 0) {
    FUN_004c00dc(local_10,local_14);
    uVar3 = FUN_004c056c(local_10);
    uVar1 = FUN_004bffc8(local_10);
    FUN_004efb90(param_1,0x411,uVar3,uVar1);
  }
  return;
}
