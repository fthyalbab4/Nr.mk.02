// rea decompile_all
// name: FUN_101120d0
// address: 0x101120d0
// body: available
// range: 0x101120d0-0x10112228 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_101120d0(uint *param_1,LPCWSTR param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  HANDLE pvVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  LPVOID pvVar7;
  uint local_70 [2];
  char local_68;
  int *local_64;
  uint local_24;
  uint local_20;
  uint local_1c;

  FUN_101107f0((undefined8 *)param_1,param_2,0);
  if ((((*param_1 & param_1[1]) == 0xffffffff) && ((char)param_1[2] == '\0')) &&
     (param_1[3] == 0x780)) {
    uVar2 = param_1[2];
    FUN_101107f0((undefined8 *)local_70,param_2,0x200000);
    if ((local_70[0] & local_70[1]) == 0xffffffff) {
      if (local_68 == '\x03') {
        puVar1 = (undefined4 *)local_64[1];
        pvVar7 = (LPVOID)*local_64;
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)(pvVar7);
        }
        if (puVar1[1] != 0) {
          if (8 < (uint)puVar1[2]) {
            pvVar7 = *(LPVOID *)((int)pvVar7 + -4);
          }
          pvVar3 = GetProcessHeap();
          HeapFree(pvVar3,0,pvVar7);
        }
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,local_64);
      }
    }
    else if (((local_24 & 0x400) == 0) || ((local_20 & 0x20000000) == 0)) {
      puVar5 = local_70;
      puVar6 = param_1;
      for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      param_1[0x13] = local_24;
      param_1[0x14] = local_20;
      param_1[0x15] = local_1c;
      puVar1 = _DAT_00000784;
      pvVar7 = _DAT_00000780;
      if ((char)uVar2 != '\x03') {
        return;
      }
      if ((code *)*_DAT_00000784 != (code *)0x0) {
        (*(code *)*_DAT_00000784)(_DAT_00000780);
      }
      if (puVar1[1] != 0) {
        FUN_10093cf0(pvVar7,puVar1[2]);
      }
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,&DAT_00000780);
      return;
    }
    param_1[1] = 0xffffffff;
    *param_1 = 0xffffffff;
  }
  return;
}
