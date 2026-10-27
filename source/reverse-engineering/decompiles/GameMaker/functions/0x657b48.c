// rea decompile_all
// name: FUN_00657b48
// address: 0x657b48
// body: available
// range: 0x657b48-0x657cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00657b48(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  byte bVar8;
  undefined4 auStackY_17fc [1525];
  undefined4 local_20;

  bVar8 = 0;
  FUN_0040c114(0,0,*(undefined4 *)(param_1 + 0xc),&stack0xffffffe0,*(undefined4 *)(param_1 + 0x10));
  puVar5 = (undefined4 *)(param_1 + 0x328 + (uint)bVar8 * -8);
  *(undefined4 *)(param_1 + 0x324) = local_20;
  puVar6 = puVar5 + (uint)bVar8 * -2 + 1;
  *puVar5 = *(undefined4 *)((int)&stack0xffffffe4 + (uint)bVar8 * 0xfffffffe * 4);
  *puVar6 = *(undefined4 *)(&stack0xffffffe8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  puVar6[(uint)bVar8 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xffffffe8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) + ((uint)bVar8 * -2 + 1) * 4)
  ;
  iVar7 = *(int *)(param_1 + 0x2f0);
  if (-1 < iVar7 + -1) {
    iVar4 = 0;
    do {
      iVar1 = FUN_0062cd94(*(undefined4 *)(*(int *)(param_1 + 0x2f4) + 8 + iVar4 * 0x18));
      if (iVar1 != 0) {
        iVar1 = FUN_006f5b30(*(undefined4 *)(iVar1 + 4));
        if (iVar1 == 0) {
          FUN_0040c114(*(undefined4 *)(*(int *)(param_1 + 0x2f4) + iVar4 * 0x18),
                       *(undefined4 *)(*(int *)(param_1 + 0x2f4) + 4 + iVar4 * 0x18),
                       *(int *)(*(int *)(param_1 + 0x2f4) + iVar4 * 0x18) + 0x20,&stack0xffffffe0,
                       *(int *)(*(int *)(param_1 + 0x2f4) + 4 + iVar4 * 0x18) + 0x20);
          FUN_0040c1e0(param_1 + 0x324,param_1 + 0x324,&stack0xffffffe0);
        }
        else {
          iVar2 = FUN_005b2edc(iVar1);
          iVar3 = *(int *)(*(int *)(param_1 + 0x2f4) + 4 + iVar4 * 0x18) - *(int *)(iVar1 + 0xc);
          iVar2 = iVar2 + iVar3;
          puVar5 = &stack0xffffffe0;
          iVar3 = FUN_005b2ec4(iVar1,iVar3,*(int *)(param_1 + 0x2f4),&stack0xffffffe0,iVar2);
          FUN_0040c114(*(int *)(*(int *)(param_1 + 0x2f4) + iVar4 * 0x18) - *(int *)(iVar1 + 8),
                       *(int *)(*(int *)(param_1 + 0x2f4) + 4 + iVar4 * 0x18) -
                       *(int *)(iVar1 + 0xc),
                       iVar3 + (*(int *)(*(int *)(param_1 + 0x2f4) + iVar4 * 0x18) -
                               *(int *)(iVar1 + 8)),puVar5,iVar2);
          FUN_0040c1e0(param_1 + 0x324,param_1 + 0x324,&stack0xffffffe0);
        }
      }
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = *(int *)(param_1 + 0x2f8);
  if (-1 < iVar7 + -1) {
    iVar4 = 0;
    do {
      FUN_0040c114(*(undefined4 *)(*(int *)(param_1 + 0x2fc) + iVar4 * 0x28),
                   *(undefined4 *)(*(int *)(param_1 + 0x2fc) + 4 + iVar4 * 0x28),
                   *(int *)(*(int *)(param_1 + 0x2fc) + iVar4 * 0x28) +
                   *(int *)(*(int *)(param_1 + 0x2fc) + 0x14 + iVar4 * 0x28),&stack0xffffffe0,
                   *(int *)(*(int *)(param_1 + 0x2fc) + 4 + iVar4 * 0x28) +
                   *(int *)(*(int *)(param_1 + 0x2fc) + 0x18 + iVar4 * 0x28));
      FUN_0040c1e0(param_1 + 0x324,param_1 + 0x324,&stack0xffffffe0);
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}
