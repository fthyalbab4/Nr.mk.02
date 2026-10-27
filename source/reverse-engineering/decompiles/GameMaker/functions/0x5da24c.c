// rea decompile_all
// name: FUN_005da24c
// address: 0x5da24c
// body: available
// range: 0x5da24c-0x5da2df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_005da24c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  LPRECT in_stack_00000014;
  int in_stack_00000018;
  undefined4 auStackY_17f0 [1519];
  undefined4 local_14;

  bVar4 = 0;
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = 0;
  }
  if (in_stack_0000000c != (undefined4 *)0x0) {
    *in_stack_0000000c = 0;
  }
  iVar2 = in_stack_00000004;
  if (in_stack_00000004 != 0) {
    iVar2 = in_stack_00000004 + 0x2e0;
  }
  FUN_0040b158(in_stack_00000008,iVar2);
  FUN_0040b140(in_stack_0000000c);
  FUN_004edf30(in_stack_00000004,&stack0xffffffec);
  puVar3 = in_stack_00000010 + (uint)bVar4 * -2 + 1;
  *in_stack_00000010 = local_14;
  *puVar3 = *(undefined4 *)((int)&stack0xfffffff0 + (uint)bVar4 * 0xfffffffe * 4);
  puVar3[(uint)bVar4 * -2 + 1] =
       *(undefined4 *)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  (puVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4)
  ;
  SetRect(in_stack_00000014,0,0,0x7fff,0x7fff);
  *(undefined4 *)(in_stack_00000018 + 4) = 0;
  uVar1 = thunk_FUN_004f7460(in_stack_00000004);
  *(undefined4 *)(in_stack_00000018 + 8) = uVar1;
  *(undefined4 *)(in_stack_00000018 + 0xc) = 0;
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0;
  return 0;
}
