// rea decompile_all
// name: FUN_0065634c
// address: 0x65634c
// body: available
// range: 0x65634c-0x656398 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065634c(undefined4 param_1)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_stack_0000000c;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;

  uVar9 = *(undefined4 *)(in_stack_0000000c + 0x3c);
  uVar8 = *(undefined4 *)(in_stack_0000000c + 0x38);
  uVar7 = *(undefined4 *)(in_stack_0000000c + 0x54);
  uVar6 = *(undefined4 *)(in_stack_0000000c + 0x50);
  dVar1 = *(double *)(in_stack_0000000c + 0x80);
  uVar2 = CONCAT31((int3)(CONCAT22((short)((uint)param_1 >> 0x10),
                                   (ushort)(dVar1 < 0.5) << 8 | (ushort)NAN(dVar1) << 10 |
                                   (ushort)(dVar1 == 0.5) << 0xe) >> 8),dVar1 < 0.5 == 0);
  uVar3 = FUN_004048b8();
  uVar4 = FUN_004048b8();
  uVar5 = FUN_004048b8();
  FUN_0058cb44(uVar5,uVar4,uVar3,uVar2,uVar6,uVar7,uVar8,uVar9);
  return;
}
