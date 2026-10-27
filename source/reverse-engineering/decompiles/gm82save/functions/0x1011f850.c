// rea decompile_all
// name: FUN_1011f850
// address: 0x1011f850
// body: available
// range: 0x1011f850-0x1011f97a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011f850(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  uint uVar3;
  LPVOID lpMem;
  int iVar4;
  HANDLE pvVar5;
  uint uVar6;
  undefined8 *puVar7;
  IErrorInfo *pIStack_34;
  undefined8 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *apuStack_28 [4];
  undefined1 local_18 [8];

  apuStack_28[0] = local_18;
  puStack_2c = (undefined1 *)0x0;
  puStack_30 = (undefined8 *)0x0;
  pIStack_34 = (IErrorInfo *)&DAT_0000003c;
  uVar3 = NtQueryInformationProcess(param_2);
  if ((int)uVar3 < 0) {
    pIStack_34 = (IErrorInfo *)0x0;
    uVar3 = uVar3 | 0x10000000;
    GetErrorInfo(0,&pIStack_34);
    if (((uVar3 != 0x90000005) && (uVar3 != 0xd0000004)) && (uVar3 != 0xd0000023)) {
      if (pIStack_34 != (IErrorInfo *)0x0) {
        (*pIStack_34->lpVtbl->Release)(pIStack_34);
      }
      goto LAB_1011f951;
    }
    if (pIStack_34 != (IErrorInfo *)0x0) {
      (*pIStack_34->lpVtbl->Release)(pIStack_34);
    }
  }
  puVar2 = puStack_2c;
  apuStack_28[0] = puStack_2c;
  uVar6 = (uint)puStack_2c >> 1;
  uVar3 = uVar6 * 2 + 2;
  puStack_30 = param_2;
  if ((int)(uVar6 + 1) < 0 || 0x7ffffffe < uVar3) {
    FUN_101367b0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  puVar7 = param_1;
  lpMem = FUN_10107380(0,uVar3);
  if (lpMem == (LPVOID)0x0) {
    FUN_101366bc(2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  param_1 = puStack_30;
  iVar4 = NtQueryInformationProcess(puStack_30,0x3c,lpMem,puVar2,apuStack_28,puVar7);
  if (-1 < iVar4) {
    *(undefined2 *)((int)lpMem + uVar6 * 2) = 0;
    FUN_1011f750(param_1,*(LPCWSTR *)((int)lpMem + 4));
    pvVar5 = GetProcessHeap();
    HeapFree(pvVar5,0,lpMem);
    return;
  }
  pvVar5 = GetProcessHeap();
  HeapFree(pvVar5,0,lpMem);
LAB_1011f951:
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 4;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}
