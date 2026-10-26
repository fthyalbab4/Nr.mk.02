// rea decompile_all
// name: FUN_0046c498
// address: 0x46c498
// body: available
// range: 0x46c498-0x46c552 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046c498(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4)

{
  int iVar1;

  if (*(int *)(param_1 + 0x16bc) < 0xe) {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) | param_4 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f)
    ;
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + 3;
  }
  else {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) | param_4 << ((byte)*(int *)(param_1 + 0x16bc) & 0x1f);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b8);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar1) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(short *)(param_1 + 0x16b8) =
         (short)((int)(uint)param_4 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
  }
  FUN_0046d0fc(param_1,param_2,param_3,1);
  return;
}
