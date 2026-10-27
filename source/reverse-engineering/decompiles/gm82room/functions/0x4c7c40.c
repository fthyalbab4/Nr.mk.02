// rea decompile_all
// name: FUN_004c7c40
// address: 0x4c7c40
// body: available
// range: 0x4c7c40-0x4c7cb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_004c7c40(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 auStackY_17f8 [1525];
  undefined4 *puVar7;
  undefined4 local_1c;

  bVar6 = 0;
  puVar7 = &stack0xffffffe4;
  iVar1 = FUN_004c7bc0();
  if (iVar1 == 0) {
    *param_3 = 0;
    param_3[2] = 0;
    param_3[1] = 0;
    param_3[3] = 0;
  }
  else {
    uVar2 = FUN_004c7494(iVar1,1);
    uVar3 = FUN_004c7494(iVar1,2);
    uVar4 = FUN_004c7410(iVar1,1);
    uVar5 = FUN_004c7410(iVar1,2);
    FUN_0040c4c0(uVar5,uVar4,uVar3,puVar7,uVar2);
    puVar7 = param_3 + (uint)bVar6 * -2 + 1;
    *param_3 = local_1c;
    *puVar7 = *(undefined4 *)((int)&stack0xffffffe8 + (uint)bVar6 * 0xfffffffe * 4);
    puVar7[(uint)bVar6 * -2 + 1] =
         *(undefined4 *)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    (puVar7 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         *(undefined4 *)
          ((int)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
          ((uint)bVar6 * -2 + 1) * 4);
  }
  return;
}
