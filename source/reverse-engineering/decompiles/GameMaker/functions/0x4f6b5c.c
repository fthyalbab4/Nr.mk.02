// rea decompile_all
// name: FUN_004f6b5c
// address: 0x4f6b5c
// body: available
// range: 0x4f6b5c-0x4f6bba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f6b5c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_18 [8];

  iVar1 = *(int *)(param_2 + 8);
  if (*(byte *)(param_2 + 4) < 4) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_004ef4e0(*(undefined4 *)(iVar1 + 0xc),param_2);
    }
  }
  else if (*(byte *)(param_2 + 4) == 5) {
    uVar3 = 0;
    uVar2 = 0;
    FUN_004ee1d0(param_1,iVar1,local_18,0,0);
    iVar1 = FUN_004f4014(param_1,local_18,0,uVar2,uVar3);
    *(int *)(param_2 + 0xc) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 0xc) = param_1;
    }
  }
  return;
}
