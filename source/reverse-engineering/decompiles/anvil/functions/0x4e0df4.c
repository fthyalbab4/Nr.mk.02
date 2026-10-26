// rea decompile_all
// name: FUN_004e0df4
// address: 0x4e0df4
// body: available
// range: 0x4e0df4-0x4e0e73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_004e0df4(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 *apuStackY_17f8 [1524];
  undefined4 *local_20;
  undefined4 local_1c;

  bVar5 = 0;
  local_20 = param_2;
  iVar1 = FUN_004baf44(param_1);
  iVar3 = *(int *)(*(int *)(param_1 + 0x278) + 0x10);
  if (iVar1 < iVar3) {
    iVar1 = iVar3;
  }
  iVar2 = FUN_004baf84(param_1);
  iVar3 = *(int *)(*(int *)(param_1 + 0x288) + 0x10);
  if (iVar3 < iVar2) {
    iVar3 = iVar2;
  }
  FUN_0040c4c0(-*(int *)(*(int *)(param_1 + 0x278) + 0xc),-*(int *)(*(int *)(param_1 + 0x288) + 0xc)
               ,iVar1,&stack0xffffffe4,iVar3);
  puVar4 = local_20 + (uint)bVar5 * -2 + 1;
  *local_20 = local_1c;
  *puVar4 = *(undefined4 *)((int)&stack0xffffffe8 + (uint)bVar5 * 0xfffffffe * 4);
  puVar4[(uint)bVar5 * -2 + 1] =
       *(undefined4 *)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  FUN_004bee00(param_1,local_20);
  return;
}
