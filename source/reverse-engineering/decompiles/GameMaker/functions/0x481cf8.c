// rea decompile_all
// name: FUN_00481cf8
// address: 0x481cf8
// body: available
// range: 0x481cf8-0x481d92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00481cf8(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  HWND hWnd;
  byte bVar4;
  undefined4 auStackY_180c [1522];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_20;
  undefined4 local_1c;

  bVar4 = 0;
  cVar2 = FUN_004f7a54(param_1);
  if (cVar2 != '\0') {
    if (*(int *)PTR_DAT_00781bfc < 6) {
      bVar3 = FUN_0041d030(5,1);
    }
    else {
      bVar3 = *(byte *)(param_1 + 0x28c) ^ 1;
    }
    if (bVar3 != 0) {
      local_20 = *(undefined4 *)(&DAT_007782b8 + (uint)*(byte *)(param_1 + 0x294) * 4);
      iVar1 = *(int *)(param_1 + 0x2a0);
      local_34 = param_2;
      FUN_00438c38(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0xc),
                   *(undefined4 *)(iVar1 + 4),&stack0xffffffe4,*(undefined4 *)(iVar1 + 8));
      local_30 = local_1c;
      *(undefined4 *)((int)&stack0xffffffd4 + (uint)bVar4 * 0xfffffffe * 4) =
           *(undefined4 *)((int)&stack0xffffffe8 + (uint)bVar4 * 0xfffffffe * 4);
      *(undefined4 *)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(undefined4 *)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      *(undefined4 *)
       ((int)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4)
           = *(undefined4 *)
              ((int)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
              ((uint)bVar4 * -2 + 1) * 4);
      hWnd = (HWND)FUN_004f76a8(param_1);
      SendMessageW(hWnd,0x1602,0,(LPARAM)&stack0xffffffcc);
    }
  }
  return;
}
