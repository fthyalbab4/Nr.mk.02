// rea decompile_all
// name: FUN_004bd514
// address: 0x4bd514
// body: available
// range: 0x4bd514-0x4bd5ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bd514(int param_1,int param_2,undefined4 param_3,ushort param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;

  local_5 = (undefined1)param_3;
  if ((*(byte *)(param_1 + 0x51) & 0x10) == 0) {
    if ((*(int *)(param_1 + 0x48) < 0x8001) && (*(int *)(param_1 + 0x4c) < 0x8001)) {
      uVar1 = FUN_004df77c(*(undefined2 *)(param_2 + 4),param_2,param_3,
                           (int)*(short *)(param_2 + 10),(int)*(short *)(param_2 + 8));
      uVar2 = FUN_004b79c4();
      FUN_00406268(param_1,local_5,uVar1 | param_4 | uVar2);
    }
    else {
      FUN_004bca14(param_1,&local_10);
      uVar1 = FUN_004df77c(*(undefined2 *)(param_2 + 4));
      uVar2 = FUN_004b79c4();
      FUN_00406268(param_1,local_5,uVar1 | param_4 | uVar2,local_c,local_10);
    }
  }
  return;
}
