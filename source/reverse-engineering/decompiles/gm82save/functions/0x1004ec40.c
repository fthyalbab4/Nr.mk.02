// rea decompile_all
// name: FUN_1004ec40
// address: 0x1004ec40
// body: available
// range: 0x1004ec40-0x1004ed56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004ecf3 to 0x10053e50 FUN_10053e50 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1004ec40(char *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  HANDLE hHandle;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  DWORD DVar6;
  bool bVar7;
  undefined1 local_1c [4];
  DWORD local_18;
  undefined1 *local_14;
  code *local_10;

  hHandle = (HANDLE)param_2[2];
  DVar6 = WaitForSingleObject(hHandle,0xffffffff);
  if (DVar6 == 0xffffffff) {
    local_18 = GetLastError();
    local_1c[0] = 0;
    local_10 = FUN_1010f950;
    local_14 = local_1c;
    FUN_101369c0(&DAT_101572dd,&local_14,&PTR_s_C__Users_runneradmin__rustup_too_1015737c);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  CloseHandle(hHandle);
  piVar3 = (int *)param_2[1];
  LOCK();
  bVar7 = piVar3[1] == 1;
  if (bVar7) {
    piVar3[1] = -1;
  }
  UNLOCK();
  if ((!bVar7) || (piVar3[1] = 1, *piVar3 != 1)) {
    FUN_10136c10("threads should not terminate unexpectedlyC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\std\\src\\thread\\lifecycle.rs"
                 ,0x29,&DAT_101418a8);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  iVar4 = param_2[1];
  cVar2 = *(char *)(iVar4 + 0xc);
  *(undefined1 *)(iVar4 + 0xc) = 0xfd;
  if (cVar2 == -3) {
    FUN_10136b20(&DAT_101418b8);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *param_1 = cVar2;
  piVar3 = (int *)*param_2;
  uVar1 = *(undefined8 *)(iVar4 + 0x15);
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(iVar4 + 0xd);
  *(undefined8 *)(param_1 + 9) = uVar1;
  *(undefined8 *)(param_1 + 0x11) = *(undefined8 *)(iVar4 + 0x1d);
  *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(iVar4 + 0x25);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar4 + 0x2c);
  LOCK();
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (*piVar3 == 0) {
    FUN_10107640((LPVOID)*param_2);
  }
  piVar3 = (int *)param_2[1];
  LOCK();
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (*piVar3 != 0) {
    return;
  }
  FUN_10053e50((LPVOID)param_2[1]);
  return;
}
