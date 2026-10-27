// rea decompile_all
// name: FUN_1009e1e0
// address: 0x1009e1e0
// body: available
// range: 0x1009e1e0-0x1009e319 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1009e1e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  LPVOID _Dst;
  bool bVar9;
  undefined8 local_814 [256];

  iVar2 = *param_1;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x408) != 0) {
      iVar3 = *(int *)(iVar2 + 4);
      iVar8 = -0x400;
      do {
        *(undefined8 *)((int)local_814 + iVar8 + 0x408) = 0;
        *(undefined8 *)((int)local_814 + iVar8 + 0x400) = 0x1009e1b0;
        iVar8 = iVar8 + 0x10;
      } while (iVar8 != 0);
      memcpy(local_814 + 0x80,(void *)(iVar2 + 8),0x404);
      memcpy((void *)(iVar2 + 8),local_814,0x400);
      *(undefined4 *)(iVar2 + 0x408) = 0;
      uVar4 = *(undefined4 *)(iVar3 + 0xc0);
      _Dst = FUN_10107380(0,0x40c);
      if (_Dst == (LPVOID)0x0) {
        FUN_1013679e(4,0x40c);
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      memcpy(_Dst,local_814 + 0x80,0x404);
      *(undefined4 *)((int)_Dst + 0x404) = uVar4;
      *(undefined4 *)((int)_Dst + 0x408) = 0;
      do {
        while( true ) {
          uVar5 = *(uint *)(iVar3 + 0x80);
          uVar6 = *(uint *)((uVar5 & 0xfffffffc) + 0x408);
          if (uVar6 < 4) break;
          LOCK();
          if (uVar5 == *(uint *)(iVar3 + 0x80)) {
            *(uint *)(iVar3 + 0x80) = uVar6;
          }
          UNLOCK();
        }
        piVar1 = (int *)((uVar5 & 0xfffffffc) + 0x408);
        LOCK();
        bVar9 = *piVar1 == 0;
        if (bVar9) {
          *piVar1 = (int)_Dst;
        }
        UNLOCK();
      } while (!bVar9);
      LOCK();
      if (uVar5 == *(uint *)(iVar3 + 0x80)) {
        *(uint *)(iVar3 + 0x80) = (uint)_Dst;
      }
      UNLOCK();
    }
    FUN_10137010((uint *)(*(int *)(iVar2 + 4) + 0x40),param_1);
  }
  return;
}
