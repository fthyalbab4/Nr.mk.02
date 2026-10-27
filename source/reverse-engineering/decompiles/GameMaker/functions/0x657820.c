// rea decompile_all
// name: FUN_00657820
// address: 0x657820
// body: available
// range: 0x657820-0x657992 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00657820(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 auStackY_17f8 [1525];
  undefined4 local_1c;

  bVar5 = 0;
  FUN_00407eb8(param_1 + 4,0);
  *(undefined4 *)(param_1 + 0xc) = 0x280;
  *(undefined4 *)(param_1 + 0x10) = 0x1e0;
  *(undefined4 *)(param_1 + 0x14) = 0x20;
  *(undefined4 *)(param_1 + 0x18) = 0x20;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 8) = 0x1e;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xc0c0c0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  FUN_0040c114(0,0,*(undefined4 *)(param_1 + 0xc),&stack0xffffffe4,*(undefined4 *)(param_1 + 0x10));
  puVar3 = (undefined4 *)(param_1 + 0x328 + (uint)bVar5 * -8);
  *(undefined4 *)(param_1 + 0x324) = local_1c;
  puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
  *puVar3 = *(undefined4 *)((int)&stack0xffffffe8 + (uint)bVar5 * 0xfffffffe * 4);
  *puVar4 = *(undefined4 *)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  puVar4[(uint)bVar5 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  FUN_00407eb8(param_1 + 0x2ec,0);
  iVar2 = 0;
  do {
    puVar1 = (undefined1 *)(param_1 + 0x28 + iVar2 * 0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    puVar1[0x10] = 1;
    puVar1[0x11] = 1;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    puVar1[0x1c] = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x129) = 1;
  iVar2 = 0;
  do {
    puVar1 = (undefined1 *)(param_1 + 300 + iVar2 * 0x38);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0x280;
    *(undefined4 *)(puVar1 + 0x10) = 0x1e0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0x280;
    *(undefined4 *)(puVar1 + 0x20) = 0x1e0;
    *(undefined4 *)(puVar1 + 0x24) = 0x20;
    *(undefined4 *)(puVar1 + 0x28) = 0x20;
    *(undefined4 *)(puVar1 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x30) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x34) = 0xffffffff;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  FUN_00409ce0(param_1 + 0x2fc,&DAT_00656448);
  FUN_00409ce0(param_1 + 0x2f4,&DAT_00656418);
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined1 *)(param_1 + 0x300) = 0;
  return;
}
