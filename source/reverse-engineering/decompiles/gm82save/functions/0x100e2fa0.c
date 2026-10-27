// rea decompile_all
// name: FUN_100e2fa0
// address: 0x100e2fa0
// body: available
// range: 0x100e2fa0-0x100e2fd6 inclusive
// range: 0x100e2fe0-0x100e305d inclusive
// range: 0x100e3060-0x100e30f2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100e2fa0(int param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  size_t _Size;
  void *pvVar5;
  int iVar6;
  HANDLE pvVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;

  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 < 2) {
    return;
  }
  iVar10 = 0;
  uVar9 = 2;
  iVar4 = *(int *)(param_1 + 4);
  do {
    _Size = *(size_t *)(iVar4 + 0x18 + iVar10);
    if (_Size == *(size_t *)(iVar4 + 8 + iVar10)) {
      pvVar5 = *(void **)(iVar4 + 0x14 + iVar10);
      iVar6 = memcmp(pvVar5,*(void **)(iVar4 + 4 + iVar10),_Size);
      if (iVar6 == 0) {
        if (*(char *)(iVar4 + 0x1c + iVar10) != *(char *)(iVar4 + 0xc + iVar10)) {
          *(undefined1 *)(iVar4 + 0x1c + iVar10) = 0;
          *(undefined1 *)(iVar4 + 0xc + iVar10) = 0;
        }
        if (*(int *)(iVar4 + 0x10 + iVar10) != 0) {
          pvVar7 = GetProcessHeap();
          HeapFree(pvVar7,0,pvVar5);
        }
        iVar6 = uVar9 - 1;
        if (uVar3 <= uVar9) goto LAB_100e30e4;
        pcVar11 = (char *)(iVar4 + 0x2c + iVar10);
        iVar10 = uVar3 - uVar9;
        break;
      }
    }
    iVar10 = iVar10 + 0x10;
    uVar9 = uVar9 + 1;
    if (uVar3 * 0x10 + -0x10 == iVar10) {
      return;
    }
  } while( true );
LAB_100e3080:
  puVar1 = (undefined8 *)(iVar4 + iVar6 * 0x10);
  if (*(size_t *)(pcVar11 + -4) == *(size_t *)(iVar4 + -8 + iVar6 * 0x10)) {
    pvVar5 = *(void **)(pcVar11 + -8);
    iVar8 = memcmp(pvVar5,*(void **)((int)puVar1 + -0xc),*(size_t *)(pcVar11 + -4));
    if (iVar8 != 0) goto LAB_100e3060;
    if (*pcVar11 != *(char *)((int)puVar1 + -4)) {
      *pcVar11 = '\0';
      *(undefined1 *)((int)puVar1 + -4) = 0;
    }
    if (*(int *)(pcVar11 + -0xc) != 0) {
      pvVar7 = GetProcessHeap();
      HeapFree(pvVar7,0,pvVar5);
    }
  }
  else {
LAB_100e3060:
    iVar6 = iVar6 + 1;
    uVar2 = *(undefined8 *)(pcVar11 + -0xc);
    puVar1[1] = *(undefined8 *)(pcVar11 + -4);
    *puVar1 = uVar2;
  }
  pcVar11 = pcVar11 + 0x10;
  iVar10 = iVar10 + -1;
  if (iVar10 == 0) {
LAB_100e30e4:
    *(int *)(param_1 + 8) = iVar6;
    return;
  }
  goto LAB_100e3080;
}
