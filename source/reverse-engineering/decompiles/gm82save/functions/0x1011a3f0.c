// rea decompile_all
// name: FUN_1011a3f0
// address: 0x1011a3f0
// body: available
// range: 0x1011a3f0-0x1011a5c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011a3f0(int *param_1,int *param_2)

{
  ushort uVar1;
  code *pcVar2;
  LPVOID pvVar3;
  HANDLE pvVar4;
  LPVOID pvVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  LPVOID pvVar9;
  int iVar10;

  if (param_2[8] == 0) {
    iVar7 = *param_2;
    pvVar9 = (LPVOID)param_2[1];
    iVar10 = param_2[3];
    *param_2 = 0;
    if (iVar7 == 1) {
      pvVar5 = (LPVOID)param_2[2];
      if (pvVar9 == (LPVOID)0x0) {
        for (; pvVar9 = pvVar5, iVar10 != 0; iVar10 = iVar10 + -1) {
          pvVar5 = *(LPVOID *)((int)pvVar9 + 0x1ec);
        }
      }
      pvVar5 = *(LPVOID *)((int)pvVar9 + 0xb0);
      while (pvVar3 = pvVar5, pvVar3 != (LPVOID)0x0) {
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,pvVar9);
        pvVar9 = pvVar3;
        pvVar5 = *(LPVOID *)((int)pvVar3 + 0xb0);
      }
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,pvVar9);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if (*param_2 != 1) {
    FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_10157f70);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pvVar9 = (LPVOID)param_2[1];
  if (pvVar9 == (LPVOID)0x0) {
    pvVar9 = (LPVOID)param_2[2];
    for (iVar7 = param_2[3]; iVar7 != 0; iVar7 = iVar7 + -1) {
      pvVar9 = *(LPVOID *)((int)pvVar9 + 0x1ec);
    }
    *param_2 = 1;
    param_2[1] = (int)pvVar9;
    param_2[2] = 0;
    param_2[3] = 0;
    uVar8 = 0;
    iVar7 = 0;
    if (*(short *)((int)pvVar9 + 0x1ea) != 0) goto joined_r0x1011a432;
  }
  else {
    iVar7 = param_2[2];
    uVar8 = param_2[3];
    if (uVar8 < *(ushort *)((int)pvVar9 + 0x1ea)) goto joined_r0x1011a432;
  }
  do {
    pvVar5 = *(LPVOID *)((int)pvVar9 + 0xb0);
    if (pvVar5 == (LPVOID)0x0) {
      FUN_10093cf0(pvVar9,4);
      FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_101566e8);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar1 = *(ushort *)((int)pvVar9 + 0x1e8);
    uVar8 = (uint)uVar1;
    iVar7 = iVar7 + 1;
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar9);
    pvVar9 = pvVar5;
  } while (*(ushort *)((int)pvVar5 + 0x1ea) <= uVar1);
joined_r0x1011a432:
  if (iVar7 == 0) {
    iVar10 = uVar8 + 1;
    pvVar5 = pvVar9;
  }
  else {
    piVar6 = (int *)((int)pvVar9 + uVar8 * 4 + 0x1f0);
    iVar10 = iVar7;
    do {
      pvVar5 = (LPVOID)*piVar6;
      iVar10 = iVar10 + -1;
      piVar6 = (int *)((int)pvVar5 + 0x1ec);
    } while (iVar10 != 0);
    iVar10 = 0;
  }
  param_2[1] = (int)pvVar5;
  param_2[2] = 0;
  param_2[3] = iVar10;
  *param_1 = (int)pvVar9;
  param_1[1] = iVar7;
  param_1[2] = uVar8;
  return;
}
