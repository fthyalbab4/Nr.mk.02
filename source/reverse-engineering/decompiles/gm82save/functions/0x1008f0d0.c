// rea decompile_all
// name: FUN_1008f0d0
// address: 0x1008f0d0
// body: available
// range: 0x1008f0d0-0x1008f18d inclusive
// range: 0x1008f190-0x1008f1d2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __fastcall FUN_1008f0d0(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_1c [2];
  int local_14;

  if (*(char *)(param_1 + 0x25) != '\0') {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 4);
  FUN_10090ba0(local_1c,param_1);
  if (local_1c[0] == 1) {
    iVar3 = *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x1c) = local_14;
    local_14 = local_14 - iVar3;
    iVar5 = iVar5 + iVar3;
  }
  else {
    if (*(char *)(param_1 + 0x25) != '\0') {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x25) = 1;
    if (*(char *)(param_1 + 0x24) == '\x01') {
      iVar5 = *(int *)(param_1 + 0x1c);
      local_14 = *(int *)(param_1 + 0x20);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x1c);
      local_14 = *(int *)(param_1 + 0x20);
      if (local_14 == iVar5) {
        return 0;
      }
    }
    local_14 = local_14 - iVar5;
    iVar5 = iVar5 + *(int *)(param_1 + 4);
  }
  iVar3 = iVar5;
  if (local_14 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = local_14;
    if (*(char *)(iVar5 + local_14 + -1) == '\n') {
      iVar3 = 0;
      if (local_14 + -1 == 0) {
        iVar4 = -1;
      }
      else {
        iVar4 = local_14 + -2;
        if (*(char *)(iVar5 + local_14 + -2) == '\r') {
          iVar3 = iVar5;
        }
      }
      if (iVar3 == 0) {
        iVar4 = local_14 + -1;
        iVar3 = iVar5;
      }
    }
  }
  uVar6 = FUN_10002420(iVar3,iVar4);
  iVar5 = (int)((ulonglong)uVar6 >> 0x20);
  iVar4 = (int)uVar6;
  cVar2 = *(char *)(param_1 + 0x28);
  do {
    if (iVar5 == 0) {
      if (cVar2 == '\0') {
        iVar3 = iVar4;
      }
      return iVar3;
    }
    cVar1 = *(char *)uVar6;
    if ((cVar2 == '\0') && ((cVar1 == '\"' || (cVar1 == '\'')))) {
LAB_1008f190:
      cVar2 = cVar1;
      *(char *)(param_1 + 0x28) = cVar2;
    }
    else if (cVar1 == cVar2) {
      cVar1 = '\0';
      goto LAB_1008f190;
    }
    iVar5 = (int)((ulonglong)uVar6 >> 0x20) + -1;
    uVar6 = CONCAT44(iVar5,(char *)uVar6 + 1);
  } while( true );
}
