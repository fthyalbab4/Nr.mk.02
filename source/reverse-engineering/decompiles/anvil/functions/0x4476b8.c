// rea decompile_all
// name: FUN_004476b8
// address: 0x4476b8
// body: available
// range: 0x4476b8-0x44774f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_004476b8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;

  puVar1 = DAT_0068ef98;
  if (DAT_0068ef9c == (undefined1 *)0x0) {
    puVar1 = VirtualAlloc((LPVOID)0x0,0x1000,0x1000,0x40);
    *puVar1 = DAT_0068ef98;
    FUN_00404514(&DAT_0067d0e4,puVar1 + 1,2);
    uVar2 = FUN_004476b0((int)puVar1 + 5,&LAB_00447690);
    *(undefined4 *)((int)puVar1 + 6) = uVar2;
    puVar3 = (undefined1 *)((int)puVar1 + 10);
    do {
      puVar4 = puVar3;
      *puVar4 = 0xe8;
      uVar2 = FUN_004476b0(puVar4,puVar1 + 1);
      *(undefined4 *)(puVar4 + 1) = uVar2;
      *(undefined1 **)(puVar4 + 5) = DAT_0068ef9c;
      puVar3 = puVar4 + 0xd;
      DAT_0068ef9c = puVar4;
    } while ((int)(puVar4 + 0xd) - (int)puVar1 < 0xffc);
  }
  DAT_0068ef98 = puVar1;
  puVar3 = DAT_0068ef9c;
  puVar1 = (undefined4 *)(DAT_0068ef9c + 5);
  DAT_0068ef9c = (undefined1 *)*(undefined4 *)(DAT_0068ef9c + 5);
  *puVar1 = in_stack_00000004;
  *(undefined4 *)(puVar3 + 9) = in_stack_00000008;
  return puVar3;
}
