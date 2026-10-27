// rea decompile_all
// name: FUN_00624edc
// address: 0x624edc
// body: available
// range: 0x624edc-0x624f66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00624edc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 auStackY_17f8 [1525];
  undefined4 local_1c;

  bVar5 = 0;
  iVar1 = *(int *)(param_1 + 4);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      FUN_00405fdc(*(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00624a60(param_1);
  FUN_00409e08(param_1 + 8,&DAT_00622864);
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_00409dfc(param_1 + 0x2c,&DAT_006228cc,1,0);
  FUN_00436ad0(0,0,0,&stack0xffffffe4,0);
  puVar3 = (undefined4 *)(param_1 + 0x18 + (uint)bVar5 * -8);
  *(undefined4 *)(param_1 + 0x14) = local_1c;
  puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
  *puVar3 = *(undefined4 *)((int)&stack0xffffffe8 + (uint)bVar5 * 0xfffffffe * 4);
  *puVar4 = *(undefined4 *)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  puVar4[(uint)bVar5 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_00623d68(param_1);
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}
