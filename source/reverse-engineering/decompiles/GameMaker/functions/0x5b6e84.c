// rea decompile_all
// name: FUN_005b6e84
// address: 0x5b6e84
// body: available
// range: 0x5b6e84-0x5b6f66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unable to track spacebase fully for stack */

void FUN_005b6e84(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  LCID LVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;

  iVar10 = 0;
  iVar7 = (param_3 + 1) * -4;
  puVar3 = &stack0xffffffd4 + iVar7;
  do {
    puVar8 = puVar3;
    *(undefined4 *)(puVar8 + -4) = 0x5b6eb3;
    iVar4 = FUN_00417640(param_2);
    *(undefined4 *)(puVar8 + -4) = 0;
    *(undefined4 *)(puVar8 + -8) = 0;
    *(int *)(puVar8 + -0xc) = iVar4;
    *(int *)(puVar8 + -0x10) = param_2;
    *(undefined4 *)(puVar8 + -0x14) = 0;
    *(undefined4 *)(puVar8 + -0x18) = 0xfde9;
    *(undefined4 *)(puVar8 + -0x1c) = 0x5b6ec7;
    iVar5 = MultiByteToWideChar(*(UINT *)(puVar8 + -0x18),*(DWORD *)(puVar8 + -0x14),
                                *(LPCSTR *)(puVar8 + -0x10),*(int *)(puVar8 + -0xc),
                                *(LPWSTR *)(puVar8 + -8),*(int *)(puVar8 + -4));
    iVar5 = iVar5 + 1;
    iVar2 = -(iVar5 * 2 + 3U & 0xfffffffc);
    if (iVar10 == 0) {
      *(int *)(&stack0xffffffd4 + iVar7) = (int)puVar8 + iVar2;
    }
    else {
      *(int *)(&stack0xffffffd4 + (param_3 - iVar10) * 4 + iVar7) = (int)puVar8 + iVar2;
    }
    *(int *)(puVar8 + iVar2 + -4) = iVar5;
    *(int *)(puVar8 + iVar2 + -8) = (int)puVar8 + iVar2;
    *(int *)(puVar8 + iVar2 + -0xc) = iVar4;
    *(int *)(puVar8 + iVar2 + -0x10) = param_2;
    *(undefined4 *)(puVar8 + iVar2 + -0x14) = 0;
    *(undefined4 *)(puVar8 + iVar2 + -0x18) = 0xfde9;
    *(undefined4 *)(puVar8 + iVar2 + -0x1c) = 0x5b6f0f;
    MultiByteToWideChar(*(UINT *)(puVar8 + iVar2 + -0x18),*(DWORD *)(puVar8 + iVar2 + -0x14),
                        *(LPCSTR *)(puVar8 + iVar2 + -0x10),*(int *)(puVar8 + iVar2 + -0xc),
                        *(LPWSTR *)(puVar8 + iVar2 + -8),*(int *)(puVar8 + iVar2 + -4));
    *(undefined2 *)(puVar8 + iVar5 * 2 + iVar2 + -2) = 0;
    param_2 = param_2 + iVar4 + 1;
    iVar10 = iVar10 + 1;
    puVar3 = puVar8 + iVar2;
  } while (iVar10 != param_3);
  *(undefined4 *)(puVar8 + iVar2 + -4) = param_4;
  *(undefined4 *)(puVar8 + iVar2 + -8) = 0x5b6f2e;
  LVar6 = GetThreadLocale();
  *(LCID *)(puVar8 + iVar2 + -8) = LVar6;
  *(int *)(puVar8 + iVar2 + -0xc) = param_3;
  *(undefined1 **)(puVar8 + iVar2 + -0x10) = &stack0xffffffd4 + iVar7;
  *(undefined **)(puVar8 + iVar2 + -0x14) = PTR_DAT_00781e38;
  *(int **)(puVar8 + iVar2 + -0x18) = param_1;
  pcVar1 = *(code **)(*param_1 + 0x14);
  puVar9 = puVar8 + iVar2 + -0x1c;
  *(undefined4 *)(puVar8 + iVar2 + -0x1c) = 0x5b6f46;
  iVar7 = (*pcVar1)();
  if (iVar7 == -0x7ffdfffa) {
    *(undefined1 **)(puVar9 + -4) = &stack0xfffffffc;
    *(undefined4 *)(puVar9 + -8) = 0x5b6f53;
    FUN_005b6e50();
  }
  else {
    *(undefined4 *)(puVar9 + -4) = 0x5b6f5b;
    FUN_005b641c();
  }
  return;
}
